const { MongoClient } = require('mongodb');
const url = "mongodb://localhost:27017/";

async function createCollection() {
  try {
    const client = await MongoClient.connect(url);
    const dbo = client.db("mydb");
    let myobj = { name: "IBIL", address: "Tvm p1" };
    await dbo.collection("customers").insertOne(myobj);
    console.log("Document inserted!");
    
    await client.close();
  } catch (err) {
    console.error("Error:", err);
  }
}

createCollection();
