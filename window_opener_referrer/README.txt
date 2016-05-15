Window opener referrer Policy
=============================

Problem:
The page that linking to gains partial access to the linking page via the window.opener object, e.g.
some phishing page or execute some JavaScript on the opener-page on your behalf.

Solution:
The rel="noopener noreferrer" attribute indicates that no referrer information is to
be leaked when following a link.

This module adds a rel="noopener noreferrer" attribute to all external links in user-generated content.
Additionally, every time a new window opened via window.open(), it reset the "opener" property.

var newWnd = window.open();
newWnd.opener = null;

Install:
1. Rename the "bartik_html_head_alter" function (window_opener_referrer.module) to your desired theme name,
   e.g. into "seven_html_head_alter"
2. Activate Module: Window opener referrer
3. Go to admin/config/content/formats -> e.g. full_html and set "rel="noopener noreferrer"



