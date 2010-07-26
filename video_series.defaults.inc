<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _video_series_content_default_fields() {
  $fields = array();

  // Exported field: field_cover_image
  $fields[] = array(
    'field_name' => 'field_cover_image',
    'type_name' => 'series',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'show_dvd_cover_linked',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'show_dvd_cover_default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'show/cover-image',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Cover Image',
      'weight' => '-3',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_kaltura_video_file
  $fields[] = array(
    'field_name' => 'field_kaltura_video_file',
    'type_name' => 'video',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'Kaltura_Media',
    'required' => '0',
    'multiple' => '0',
    'module' => 'field_kaltura',
    'active' => '1',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'thumbsize_height' => '',
    'thumbsize_width' => '',
    'entry_widget' => '1845442',
    'entry_cw' => '611',
    'custom_cw' => '',
    'player_height' => '360',
    'player_width' => '610',
    'widget' => array(
      'rows' => 1,
      'size' => '60',
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Video File',
      'weight' => '-4',
      'description' => '',
      'type' => 'field_kaltura_textfield',
      'module' => 'field_kaltura',
    ),
  );

  // Exported field: field_series
  $fields[] = array(
    'field_name' => 'field_series',
    'type_name' => 'video',
    'display_settings' => array(
      'weight' => '5',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '1',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'series' => 'series',
      'kaltura_entry' => 0,
      'page' => 0,
      'video' => 0,
      'webform' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'node_link' => array(
        'teaser' => 0,
        'full' => 1,
        'title' => 'Add episode',
        'hover_title' => '',
        'destination' => 'default',
      ),
      'fallback' => 'page_not_found',
      'edit_fallback' => 0,
      'label' => 'Series',
      'weight' => '5',
      'description' => '',
      'type' => 'nodereference_url',
      'module' => 'nodereference_url',
    ),
  );

  // Translatables
  array(
    t('Cover Image'),
    t('Series'),
    t('Video File'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _video_series_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_flag_default_flags().
 */
function _video_series_flag_default_flags() {
$flags = array();
// Exported flag: "Purchased Content".
$flags[] = array (
  'content_type' => 'node',
  'name' => 'video_series_purchased_content',
  'title' => 'Purchased Content',
  'global' => '0',
  'types' => 
  array (
    0 => 'video',
  ),
  'flag_short' => 'Watch now',
  'flag_long' => '',
  'flag_message' => '',
  'unflag_short' => 'Disable access',
  'unflag_long' => '',
  'unflag_message' => '',
  'unflag_denied_text' => 'Video purchased',
  'link_type' => 'confirm',
  'roles' => 
  array (
    'flag' => 
    array (
      0 => 2,
      1 => 3,
    ),
    'unflag' => 
    array (
      0 => 3,
    ),
  ),
  'show_on_page' => 0,
  'show_on_teaser' => 0,
  'show_on_form' => 0,
  'access_author' => '',
  'i18n' => 0,
  'flag_confirmation' => 'This will deduct "X" Credits from your account, click "purchase" proceed with purchase.',
  'unflag_confirmation' => 'This will remove access to this video.',
  'module' => 'video_series',
  'locked' => 
  array (
    0 => 'name',
  ),
  'api_version' => 2,
);
return $flags;
}

/**
 * Helper to implementation of hook_imagecache_default_presets().
 */
function _video_series_imagecache_default_presets() {
  $items = array(
    'show_dvd_cover' => array(
      'presetname' => 'show_dvd_cover',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '180',
            'height' => '250',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _video_series_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_series';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-2',
    'revision_information' => '1',
    'author' => '0',
    'options' => '2',
    'comment_settings' => '3',
    'menu' => '-4',
    'path' => '4',
    'video_episodes_node_content_1' => '-1',
  );

  $export['content_extra_weights_series'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_video';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-2',
    'revision_information' => '0',
    'author' => '-1',
    'options' => '1',
    'comment_settings' => '2',
    'menu' => '-3',
    'path' => '3',
  );

  $export['content_extra_weights_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kaltura_audio_entry_widget';
  $strongarm->value = '48501';

  $export['kaltura_audio_entry_widget'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kaltura_display_credits';
  $strongarm->value = 0;

  $export['kaltura_display_credits'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kaltura_display_entry_video_teaser_with_player';
  $strongarm->value = '0';

  $export['kaltura_display_entry_video_teaser_with_player'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kaltura_editor_URL';
  $strongarm->value = 'kaltura/simple_editor';

  $export['kaltura_editor_URL'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kaltura_editor_height';
  $strongarm->value = 546;

  $export['kaltura_editor_height'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kaltura_editor_width';
  $strongarm->value = 890;

  $export['kaltura_editor_width'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kaltura_entry_admin_tags_voc';
  $strongarm->value = '0';

  $export['kaltura_entry_admin_tags_voc'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kaltura_entry_rotate_thumb';
  $strongarm->value = '1';

  $export['kaltura_entry_rotate_thumb'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kaltura_entry_tags_voc';
  $strongarm->value = '0';

  $export['kaltura_entry_tags_voc'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kaltura_image_entry_height';
  $strongarm->value = '364';

  $export['kaltura_image_entry_height'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kaltura_image_entry_thumb_height';
  $strongarm->value = '90';

  $export['kaltura_image_entry_thumb_height'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kaltura_image_entry_thumb_width';
  $strongarm->value = '120';

  $export['kaltura_image_entry_thumb_width'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kaltura_image_entry_width';
  $strongarm->value = '410';

  $export['kaltura_image_entry_width'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kaltura_notification_status';
  $strongarm->value = 0;

  $export['kaltura_notification_status'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kaltura_notification_type';
  $strongarm->value = 1;

  $export['kaltura_notification_type'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kaltura_partner_url2';
  $strongarm->value = 'http://videozoo.lithiumweb.com.au/kaltura/notification_handler';

  $export['kaltura_partner_url2'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kaltura_registration_first_load';
  $strongarm->value = TRUE;

  $export['kaltura_registration_first_load'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kaltura_secret';
  $strongarm->value = '8e67f086d6ebbb552ec8466dfbc8da18';

  $export['kaltura_secret'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kaltura_server_url';
  $strongarm->value = 'http://www.kaltura.com';

  $export['kaltura_server_url'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kaltura_subp_id';
  $strongarm->value = '24669200';

  $export['kaltura_subp_id'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kaltura_video_entry_cw_custom';
  $strongarm->value = '123';

  $export['kaltura_video_entry_cw_custom'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kaltura_video_entry_cw_type';
  $strongarm->value = '1';

  $export['kaltura_video_entry_cw_type'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kaltura_video_entry_delivery_type';
  $strongarm->value = 'RTMP';

  $export['kaltura_video_entry_delivery_type'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kaltura_video_entry_height';
  $strongarm->value = '360';

  $export['kaltura_video_entry_height'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kaltura_video_entry_player_ratio';
  $strongarm->value = '0';

  $export['kaltura_video_entry_player_ratio'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kaltura_video_entry_thumb_height';
  $strongarm->value = '90';

  $export['kaltura_video_entry_thumb_height'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kaltura_video_entry_thumb_width';
  $strongarm->value = '120';

  $export['kaltura_video_entry_thumb_width'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kaltura_video_entry_widget';
  $strongarm->value = '1845442';

  $export['kaltura_video_entry_widget'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kaltura_video_entry_width';
  $strongarm->value = '400';

  $export['kaltura_video_entry_width'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_series';
  $strongarm->value = array(
    '0' => 'status',
  );

  $export['node_options_series'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_video';
  $strongarm->value = array(
    '0' => 'status',
  );

  $export['node_options_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_video_pattern';
  $strongarm->value = '[field_series-path]/[title-raw]';

  $export['pathauto_node_video_pattern'] = $strongarm;
  return $export;
}
