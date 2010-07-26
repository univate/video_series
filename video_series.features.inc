<?php

/**
 * Implementation of hook_content_default_fields().
 */
function video_series_content_default_fields() {
  module_load_include('inc', 'video_series', 'video_series.defaults');
  $args = func_get_args();
  return call_user_func_array('_video_series_content_default_fields', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function video_series_ctools_plugin_api() {
  module_load_include('inc', 'video_series', 'video_series.defaults');
  $args = func_get_args();
  return call_user_func_array('_video_series_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_flag_default_flags().
 */
function video_series_flag_default_flags() {
  module_load_include('inc', 'video_series', 'video_series.defaults');
  $args = func_get_args();
  return call_user_func_array('_video_series_flag_default_flags', $args);
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function video_series_imagecache_default_presets() {
  module_load_include('inc', 'video_series', 'video_series.defaults');
  $args = func_get_args();
  return call_user_func_array('_video_series_imagecache_default_presets', $args);
}

/**
 * Implementation of hook_node_info().
 */
function video_series_node_info() {
  module_load_include('inc', 'video_series', 'video_series.features.node');
  $args = func_get_args();
  return call_user_func_array('_video_series_node_info', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function video_series_strongarm() {
  module_load_include('inc', 'video_series', 'video_series.defaults');
  $args = func_get_args();
  return call_user_func_array('_video_series_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function video_series_views_default_views() {
  module_load_include('inc', 'video_series', 'video_series.features.views');
  $args = func_get_args();
  return call_user_func_array('_video_series_views_default_views', $args);
}
