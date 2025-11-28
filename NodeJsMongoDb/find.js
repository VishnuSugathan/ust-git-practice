const { MongoClient } = require('mongodb');
const url = "mongodb://localhost:27017/";

async function createCollection() {
  try {
    const client = await MongoClient.connect(url);
    const dbo = client.db("mydb");
    const result = await dbo.collection("customers").findOne({});
    console.log("Document found:", result);
    
    await client.close();
  } catch (err) {
    console.error("Error:", err);
  }
}

createCollection();
