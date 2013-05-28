{dede:noteinfo notename="天猫商品采集" channelid="6" macthtype="string"
    refurl="http://detail.tmall.com/item.htm?spm=a1z10.3.w17-737739803.11.Ti4BjM&id=21578412784&" sourcelang="gb2312" cosort="asc"
  isref="yes" exptime="10" usemore="0" /}
{dede:listrule sourcetype="batch" rssurl="http://" regxurl="http://lcly.tmall.com/search.htm?spm=a1z10.3.w17-737739803.65.xM1vxS&search=y&viewType=list&orderType=newOn&pageNum=(*)"
startid="1" endid="7" addv="1" urlrule="area" musthas=""
 nothas="show_review" listpic="1" usemore="0"}
    {dede:addurls}{/dede:addurls}
    {dede:batchrule}{/dede:batchrule}
    {dede:regxrule}{/dede:regxrule}
    {dede:areastart}<ul class="shop-list">{/dede:areastart}
    {dede:areaend}<div class="pagination">{/dede:areaend}
{/dede:listrule}
