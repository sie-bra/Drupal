<?php

/**
 * Admin settings form.
 */
function window_opener_referrer_admin()
{
    $form['window_opener_referrer_link'] = array(
        '#type' => 'checkbox',
        '#title' => t('Setzt <code>rel="noopener noreferrer"</code> zu allen Links mit <code>target="_blank"</code>'),
        '#default_value' => variable_get('window_opener_referrer_link', true),
        '#description' => t('Setzt <code>rel="noopener noreferrer"</code> zu allen Links mit <code>target="_blank"</code>'),
    );

    return system_settings_form($form);
}
