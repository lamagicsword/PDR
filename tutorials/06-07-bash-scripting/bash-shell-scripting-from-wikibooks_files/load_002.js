mw.loader.using('mediawiki.util',function(){if(mw.config.get('wgArticleId')===0&&mw.config.get('wgNamespaceNumber')===2){var titleParts=mw.config.get('wgPageName').split('/');if(titleParts.length==2){var userSkinPage=titleParts.shift()+'/'+mw.config.get('skin');if(titleParts.slice(-1)==='skin.js'){window.location.href=mw.util.wikiGetlink(userSkinPage+'.js');}else if(titleParts.slice(-1)=='skin.css'){window.location.href=mw.util.wikiGetlink(userSkinPage+'.css');}}}mw.config.set('wgBookName',(mw.config.get('wgPageName').split('/',1)[0]||'').split(':',2).join(':'));importStylesheet('MediaWiki:Common.css/'+mw.config.get('wgBookName'));importScript('MediaWiki:Common.js/Relics.js');importScript('MediaWiki:Common.js/ExtraTools.js');importScript('MediaWiki:Common.js/CollapseElements.js');importScript('MediaWiki:Common.js/NavigationTabs.js');importScript('MediaWiki:Common.js/Displaytitle.js');importScript('MediaWiki:Common.js/Perbook.js');importScript('MediaWiki:Common.js/tabs.js');importScript
('MediaWiki:Common.js/top.js');importScript('MediaWiki:Common.js/review.js');importScript('MediaWiki:Common.js/Categories.js');importScript('MediaWiki:Common.js/use.js');importScript('MediaWiki:Common.js/Slideshows.js');if(mw.config.get('wgCanonicalSpecialPageName')==='Watchlist'){importScript('MediaWiki:Common.js/WatchlistNotice.js');}else if($.inArray(mw.config.get('wgAction'),['edit','submit','upload'])!==-1){importScript('MediaWiki:Common.js/Special_characters.js');importScript('MediaWiki:Common.js/Toolbox.js');}});;mw.loader.state({"site":"ready"});
/* cache key: enwikibooks:resourceloader:filter:minify-js:7:1589e8b8fff82e99a93634aef8d05d83 */