<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _video_series_node_info() {
  $items = array(
    'series' => array(
      'name' => t('Show'),
      'module' => 'features',
      'description' => t('A show is a groups of episodes.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'video' => array(
      'name' => t('Episode'),
      'module' => 'features',
      'description' => t('A single video episode in a show.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
