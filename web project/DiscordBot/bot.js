const { Client, Intents, MessageSelectMenu } = require('discord.js');
const client = new Client({ intents: [Intents.FLAGS.GUILDS,Intents.FLAGS.GUILD_MESSAGES],partials:["MESSAGE"] });
require('dotenv').config()


client.on('ready', () => {
  console.log(`I can read by ${client.user.tag}...`);
});
// client.on("messageDelete",(msg)=>{
// msg.reply("Why are you deleting messages 😥");

// })

client.on("message",(msg)=>{


 if(msg.content.includes("love you")&&msg.author.id!=973122949001408512){
        msg.reply("I love you too");
    }
    else if( /pain|Pain/g.test(msg.content)&&msg.author.id!=973122949001408512){
        msg.channel.send("Fell it")
    }else if( /([Aa][Nn][Ii][Mm][Ee])|([lL][oO][vV][eE])/g.test(msg.content)&&msg.author.id!=973122949001408512){
        msg.react("❤");
    }
})



client.login(process.env.BOT_TOKEN);