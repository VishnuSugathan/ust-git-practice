const { MongoClient } = require('mongodb');
const url = "mongodb://localhost:27017/";



async function createCollection() {
  try {
    const client = await MongoClient.connect(url);
    const dbo = client.db("mydb");
    let myquery = { name: "IBIL" };
    await dbo.collection("customers").deleteOne(myquery);
    console.log("Document deleted!");
    await client.close();
  } catch (err) {
    console.error("Error:", err);
  }
}

createCollection();
