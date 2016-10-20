<?php

/**
 * Implements hook_panopoly_config_info()
 */
function energycircle_apps_panopoly_config_info() {
  $info = array();

  // Contact.
  $info['contact'] = array(
    'title' => t('Contact'),
    'description' => t('Contact and opening hours.'),
    'weight' => 20,
    'config' => array(
      'phone' => array(
        'title' => t('Phone'),
        'type' => 'string',
        'description' => t('Phone number for restaurant.'),
        'show_on_install' => TRUE,
      ),
      'address' => array(
        'title' => t('Address'),
        'type' => 'text',
        'description' => t('Restaurant address.'),
        'show_on_install' => TRUE,
      ),
      'opening_hours' => array(
        'title' => t('Opening Hours'),
        'type' => 'text',
        'description' => t('Restaurant opening hours.'),
        'show_on_install' => TRUE,
      ),
    ),
  );

  return $info;
}

?>
