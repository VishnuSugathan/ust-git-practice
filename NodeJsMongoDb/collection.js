const { MongoClient } = require('mongodb');
const url = "mongodb://localhost:27017/";

async function createCollection() {
  try {
    const client = await MongoClient.connect(url);
    const dbo = client.db("mydb");
    
    await dbo.createCollection("customers");
    console.log("Collection created!");
    
    await client.close();
  } catch (err) {
    console.error("Error:", err);
  }
}

createCollection();
