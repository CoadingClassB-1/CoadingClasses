let catgs = document.querySelector('.catgs')
let rightMain = document.querySelector('.rightMain')
let searchInput = document.querySelector('.searchInput')

async function fetchApi() {
    let data = await fetch('https://dummyjson.com/products')
    let res = await data.json()
    return (res.products)
}

window.onload = async function () {

    catgs.innerHTML = `Loading...`

    let products = await fetchApi()
    uniqCatg(products)
    displayProduct(products)
}

async function uniqCatg(allProducts) {
    catgs.innerHTML = ''
    let allcatg = allProducts.map((catg) => {
        return (catg.category)
    })

    let uniqCatg = allcatg.filter((item, index) => {
        return (allcatg.indexOf(item) == index)
    })

    let eachCatg = uniqCatg.map((catg) => {
        catgs.innerHTML += `<div class="flex catg-item pointer center items-center">
           <p>${(catg.charAt(0).toUpperCase() + catg.slice(1))}</p>
           <img class="arrowCatg" src="assets/arrow.svg" alt="">
       </div>`
    })

}

async function displayProduct(products) {
    let htmlContent = products.map((item) => {
        return `<div class="rightProduct"><a class='flex center ' href='details.html?id=${item.id}' >

        <div class="productImg">
            <img src=${item.thumbnail} alt="">
        </div>

        <div class="productName">
            <p>${item.title}</p>
        </div>

        <div class="productPrice">
            <p>$ ${item.price} /-</p>
        </div>
        </a></div>`;
    }).join('');

    rightMain.innerHTML += htmlContent;
}

searchInput.addEventListener('keydown', async () => {
    let products = await fetchApi()
    let value = searchInput.value.toLowerCase()
    let searchProduct = products.filter((product) => {
        let title = product.title.toLowerCase()
        return (title.includes(value))
    })
    displayProduct(searchProduct)
})