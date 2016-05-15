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



