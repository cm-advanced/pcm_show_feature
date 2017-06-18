<?php
/**
 * @file
 * pcm_show_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pcm_show_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'content_manage';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Content Manage';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Content Manage';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'Author';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content-manage';
  $export['content_manage'] = $view;

  $view = new view();
  $view->name = 'pcm_show_airings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'cm_airing';
  $view->human_name = 'Show: PCM Airings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Airings';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'airing_id' => 'airing_id',
    'field_airing_title' => 'field_airing_title',
    'field_airing_date' => 'field_airing_title',
    'nothing' => 'field_airing_title',
    'field_airing_grid_link' => 'field_airing_title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'airing_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_airing_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' -- ',
      'empty_column' => 0,
    ),
    'field_airing_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_airing_grid_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '--',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="<?php print url(\'airing/add\'); ?>>Add Airing</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = '<div class="messages warning">This Show has no Airings.</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Airing: Airing ID */
  $handler->display->display_options['fields']['airing_id']['id'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['table'] = 'cm_airing';
  $handler->display->display_options['fields']['airing_id']['field'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['label'] = '';
  $handler->display->display_options['fields']['airing_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['airing_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['airing_id']['separator'] = '';
  /* Field: Airing: Title */
  $handler->display->display_options['fields']['field_airing_title']['id'] = 'field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['table'] = 'field_data_field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['field'] = 'field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_airing_title']['alter']['path'] = 'airing/[airing_id]';
  /* Field: Airing: Date */
  $handler->display->display_options['fields']['field_airing_date']['id'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['field'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_airing_date']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'airing/[airing_id]/edit';
  /* Field: Airing: Airing Grid Link */
  $handler->display->display_options['fields']['field_airing_grid_link']['id'] = 'field_airing_grid_link';
  $handler->display->display_options['fields']['field_airing_grid_link']['table'] = 'field_data_field_airing_grid_link';
  $handler->display->display_options['fields']['field_airing_grid_link']['field'] = 'field_airing_grid_link';
  $handler->display->display_options['fields']['field_airing_grid_link']['label'] = 'Airing Grid';
  $handler->display->display_options['fields']['field_airing_grid_link']['type'] = 'computed_field_unsanitized';
  /* Field: Field: Live Source */
  $handler->display->display_options['fields']['field_live_source']['id'] = 'field_live_source';
  $handler->display->display_options['fields']['field_live_source']['table'] = 'field_data_field_live_source';
  $handler->display->display_options['fields']['field_live_source']['field'] = 'field_live_source';
  $handler->display->display_options['fields']['field_live_source']['label'] = '';
  $handler->display->display_options['fields']['field_live_source']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_live_source']['element_label_colon'] = FALSE;
  /* Sort criterion: Airing: Date -  start date (field_airing_date) */
  $handler->display->display_options['sorts']['field_airing_date_value']['id'] = 'field_airing_date_value';
  $handler->display->display_options['sorts']['field_airing_date_value']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['sorts']['field_airing_date_value']['field'] = 'field_airing_date_value';
  /* Contextual filter: Airing: Show (field_airing_show_ref) */
  $handler->display->display_options['arguments']['field_airing_show_ref_target_id']['id'] = 'field_airing_show_ref_target_id';
  $handler->display->display_options['arguments']['field_airing_show_ref_target_id']['table'] = 'field_data_field_airing_show_ref';
  $handler->display->display_options['arguments']['field_airing_show_ref_target_id']['field'] = 'field_airing_show_ref_target_id';
  $handler->display->display_options['arguments']['field_airing_show_ref_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_airing_show_ref_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_airing_show_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_airing_show_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_airing_show_ref_target_id']['summary_options']['items_per_page'] = '25';

  /* Display: View Field Block */
  $handler = $view->new_display('block', 'View Field Block', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Airing: Airing ID */
  $handler->display->display_options['fields']['airing_id']['id'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['table'] = 'cm_airing';
  $handler->display->display_options['fields']['airing_id']['field'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['airing_id']['separator'] = '';
  /* Field: Airing: Title */
  $handler->display->display_options['fields']['field_airing_title']['id'] = 'field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['table'] = 'field_data_field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['field'] = 'field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['label'] = '';
  $handler->display->display_options['fields']['field_airing_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_airing_title']['alter']['path'] = 'airing/[airing_id]';
  $handler->display->display_options['fields']['field_airing_title']['element_label_colon'] = FALSE;
  /* Field: Airing: Date */
  $handler->display->display_options['fields']['field_airing_date']['id'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['field'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_airing_date']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'airing/[airing_id]/edit';
  /* Field: Airing: Airing Grid Link */
  $handler->display->display_options['fields']['field_airing_grid_link']['id'] = 'field_airing_grid_link';
  $handler->display->display_options['fields']['field_airing_grid_link']['table'] = 'field_data_field_airing_grid_link';
  $handler->display->display_options['fields']['field_airing_grid_link']['field'] = 'field_airing_grid_link';
  $handler->display->display_options['fields']['field_airing_grid_link']['label'] = '';
  $handler->display->display_options['fields']['field_airing_grid_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_airing_grid_link']['type'] = 'computed_field_unsanitized';

  /* Display: Future Show Airings */
  $handler = $view->new_display('block', 'Future Show Airings', 'future');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Airing: Date -  start date (field_airing_date) */
  $handler->display->display_options['filters']['field_airing_date_value']['id'] = 'field_airing_date_value';
  $handler->display->display_options['filters']['field_airing_date_value']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['filters']['field_airing_date_value']['field'] = 'field_airing_date_value';
  $handler->display->display_options['filters']['field_airing_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_airing_date_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_airing_date_value']['default_date'] = 'now';
  $export['pcm_show_airings'] = $view;

  $view = new view();
  $view->name = 'show_admin_displays';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Show: Admin Displays';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Newly Submitted Episodes';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    16 => '16',
    7 => '7',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no shows missing files for repeat airings.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* Field: Content: Project */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Received Filename */
  $handler->display->display_options['fields']['field_expected_filename']['id'] = 'field_expected_filename';
  $handler->display->display_options['fields']['field_expected_filename']['table'] = 'field_data_field_expected_filename';
  $handler->display->display_options['fields']['field_expected_filename']['field'] = 'field_expected_filename';
  $handler->display->display_options['fields']['field_expected_filename']['label'] = 'Filename';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Schedule Show';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/node/[nid]/edit">Schedule Show</a>';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cm_show' => 'cm_show',
  );
  /* Filter criterion: Content: Is This a Special? (field_show_is_special) */
  $handler->display->display_options['filters']['field_show_is_special_value']['id'] = 'field_show_is_special_value';
  $handler->display->display_options['filters']['field_show_is_special_value']['table'] = 'field_data_field_show_is_special';
  $handler->display->display_options['filters']['field_show_is_special_value']['field'] = 'field_show_is_special_value';
  $handler->display->display_options['filters']['field_show_is_special_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Received Filename (field_expected_filename) */
  $handler->display->display_options['filters']['field_expected_filename_value']['id'] = 'field_expected_filename_value';
  $handler->display->display_options['filters']['field_expected_filename_value']['table'] = 'field_data_field_expected_filename';
  $handler->display->display_options['filters']['field_expected_filename_value']['field'] = 'field_expected_filename_value';
  $handler->display->display_options['filters']['field_expected_filename_value']['operator'] = 'not empty';
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';

  /* Display: Shows To Be Scheduled */
  $handler = $view->new_display('block', 'Shows To Be Scheduled', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Shows To Be Scheduled';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/admin/programming/shows/tapes/shows-to-be-scheduled">See All</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no shows that need to be scheduled.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Project */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: TV Guide Title */
  $handler->display->display_options['fields']['field_tv_guide_title']['id'] = 'field_tv_guide_title';
  $handler->display->display_options['fields']['field_tv_guide_title']['table'] = 'field_data_field_tv_guide_title';
  $handler->display->display_options['fields']['field_tv_guide_title']['field'] = 'field_tv_guide_title';
  /* Field: Content: Received Filename */
  $handler->display->display_options['fields']['field_expected_filename']['id'] = 'field_expected_filename';
  $handler->display->display_options['fields']['field_expected_filename']['table'] = 'field_data_field_expected_filename';
  $handler->display->display_options['fields']['field_expected_filename']['field'] = 'field_expected_filename';
  $handler->display->display_options['fields']['field_expected_filename']['label'] = 'Filename';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Schedule Show';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/node/[nid]/edit">Schedule Show</a>';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cm_show' => 'cm_show',
  );
  /* Filter criterion: Content: Is This a Special? (field_show_is_special) */
  $handler->display->display_options['filters']['field_show_is_special_value']['id'] = 'field_show_is_special_value';
  $handler->display->display_options['filters']['field_show_is_special_value']['table'] = 'field_data_field_show_is_special';
  $handler->display->display_options['filters']['field_show_is_special_value']['field'] = 'field_show_is_special_value';
  $handler->display->display_options['filters']['field_show_is_special_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = 'return pcm_show_shows_to_be_scheduled_date_filter($row);';
  /* Filter criterion: Content: Is Placeholder? (field_is_placeholder) */
  $handler->display->display_options['filters']['field_is_placeholder_value']['id'] = 'field_is_placeholder_value';
  $handler->display->display_options['filters']['field_is_placeholder_value']['table'] = 'field_data_field_is_placeholder';
  $handler->display->display_options['filters']['field_is_placeholder_value']['field'] = 'field_is_placeholder_value';
  $handler->display->display_options['filters']['field_is_placeholder_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_is_placeholder_value']['value'] = array(
    1 => '1',
  );

  /* Display: Newly Submitted Episodes */
  $handler = $view->new_display('block', 'Newly Submitted Episodes', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Newly Submitted Series Episodes';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/admin/programming/shows/tapes/new-episodes">See All</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no series episodes that have been submitted.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Project */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Episode Number */
  $handler->display->display_options['fields']['field_episode_number']['id'] = 'field_episode_number';
  $handler->display->display_options['fields']['field_episode_number']['table'] = 'field_data_field_episode_number';
  $handler->display->display_options['fields']['field_episode_number']['field'] = 'field_episode_number';
  $handler->display->display_options['fields']['field_episode_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Received Filename */
  $handler->display->display_options['fields']['field_expected_filename']['id'] = 'field_expected_filename';
  $handler->display->display_options['fields']['field_expected_filename']['table'] = 'field_data_field_expected_filename';
  $handler->display->display_options['fields']['field_expected_filename']['field'] = 'field_expected_filename';
  $handler->display->display_options['fields']['field_expected_filename']['label'] = 'Filename';
  $handler->display->display_options['fields']['field_expected_filename']['empty'] = '<a style="margin-left:auto; margin-right:auto; display:block" href="/node/[nid]/upload"><img src="/sites/default/files/15107_wpm_lowres.png" width="25px" alt="Upload now" title="Upload now"/>Upload File</a>';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Schedule Show';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/node/[nid]/edit">Schedule Show</a>';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cm_show' => 'cm_show',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Is This a Special? (field_show_is_special) */
  $handler->display->display_options['filters']['field_show_is_special_value']['id'] = 'field_show_is_special_value';
  $handler->display->display_options['filters']['field_show_is_special_value']['table'] = 'field_data_field_show_is_special';
  $handler->display->display_options['filters']['field_show_is_special_value']['field'] = 'field_show_is_special_value';
  $handler->display->display_options['filters']['field_show_is_special_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_show_is_special_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_show_is_special_value']['group'] = 1;
  /* Filter criterion: Content: Project Type (field_cm_project_types) */
  $handler->display->display_options['filters']['field_cm_project_types_tid']['id'] = 'field_cm_project_types_tid';
  $handler->display->display_options['filters']['field_cm_project_types_tid']['table'] = 'field_data_field_cm_project_types';
  $handler->display->display_options['filters']['field_cm_project_types_tid']['field'] = 'field_cm_project_types_tid';
  $handler->display->display_options['filters']['field_cm_project_types_tid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['field_cm_project_types_tid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_cm_project_types_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_cm_project_types_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_cm_project_types_tid']['vocabulary'] = 'cm_project_types';
  /* Filter criterion: Content: Live (field_live) */
  $handler->display->display_options['filters']['field_live_value']['id'] = 'field_live_value';
  $handler->display->display_options['filters']['field_live_value']['table'] = 'field_data_field_live';
  $handler->display->display_options['filters']['field_live_value']['field'] = 'field_live_value';
  $handler->display->display_options['filters']['field_live_value']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['field_live_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_live_value']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'cm_show' => 'cm_show',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Content: Is This a Special? (field_show_is_special) */
  $handler->display->display_options['filters']['field_show_is_special_value_1']['id'] = 'field_show_is_special_value_1';
  $handler->display->display_options['filters']['field_show_is_special_value_1']['table'] = 'field_data_field_show_is_special';
  $handler->display->display_options['filters']['field_show_is_special_value_1']['field'] = 'field_show_is_special_value';
  $handler->display->display_options['filters']['field_show_is_special_value_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_show_is_special_value_1']['group'] = 2;
  /* Filter criterion: Content: Project Type (field_cm_project_types) */
  $handler->display->display_options['filters']['field_cm_project_types_tid_1']['id'] = 'field_cm_project_types_tid_1';
  $handler->display->display_options['filters']['field_cm_project_types_tid_1']['table'] = 'field_data_field_cm_project_types';
  $handler->display->display_options['filters']['field_cm_project_types_tid_1']['field'] = 'field_cm_project_types_tid';
  $handler->display->display_options['filters']['field_cm_project_types_tid_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['field_cm_project_types_tid_1']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_cm_project_types_tid_1']['group'] = 2;
  $handler->display->display_options['filters']['field_cm_project_types_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_cm_project_types_tid_1']['vocabulary'] = 'cm_project_types';
  /* Filter criterion: Content: Live (field_live) */
  $handler->display->display_options['filters']['field_live_value_1']['id'] = 'field_live_value_1';
  $handler->display->display_options['filters']['field_live_value_1']['table'] = 'field_data_field_live';
  $handler->display->display_options['filters']['field_live_value_1']['field'] = 'field_live_value';
  $handler->display->display_options['filters']['field_live_value_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['field_live_value_1']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_live_value_1']['group'] = 2;

  /* Display: Shows To Be Scheduled Page */
  $handler = $view->new_display('page', 'Shows To Be Scheduled Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Shows To Be Scheduled';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no shows to be scheduled.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Project */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: TV Guide Title */
  $handler->display->display_options['fields']['field_tv_guide_title']['id'] = 'field_tv_guide_title';
  $handler->display->display_options['fields']['field_tv_guide_title']['table'] = 'field_data_field_tv_guide_title';
  $handler->display->display_options['fields']['field_tv_guide_title']['field'] = 'field_tv_guide_title';
  /* Field: Content: Received Filename */
  $handler->display->display_options['fields']['field_expected_filename']['id'] = 'field_expected_filename';
  $handler->display->display_options['fields']['field_expected_filename']['table'] = 'field_data_field_expected_filename';
  $handler->display->display_options['fields']['field_expected_filename']['field'] = 'field_expected_filename';
  $handler->display->display_options['fields']['field_expected_filename']['label'] = 'Filename';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Schedule Show';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/node/[nid]/edit">Schedule Show</a>';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cm_show' => 'cm_show',
  );
  /* Filter criterion: Content: Is This a Special? (field_show_is_special) */
  $handler->display->display_options['filters']['field_show_is_special_value']['id'] = 'field_show_is_special_value';
  $handler->display->display_options['filters']['field_show_is_special_value']['table'] = 'field_data_field_show_is_special';
  $handler->display->display_options['filters']['field_show_is_special_value']['field'] = 'field_show_is_special_value';
  $handler->display->display_options['filters']['field_show_is_special_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = 'return pcm_show_shows_to_be_scheduled_date_filter($row);';
  /* Filter criterion: Content: Is Placeholder? (field_is_placeholder) */
  $handler->display->display_options['filters']['field_is_placeholder_value']['id'] = 'field_is_placeholder_value';
  $handler->display->display_options['filters']['field_is_placeholder_value']['table'] = 'field_data_field_is_placeholder';
  $handler->display->display_options['filters']['field_is_placeholder_value']['field'] = 'field_is_placeholder_value';
  $handler->display->display_options['filters']['field_is_placeholder_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_is_placeholder_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'admin/shows/to-be-scheduled';

  /* Display: Newly Submitted Episodes Page */
  $handler = $view->new_display('page', 'Newly Submitted Episodes Page', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Newly Submitted Series Episodes';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Project */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Episode Number */
  $handler->display->display_options['fields']['field_episode_number']['id'] = 'field_episode_number';
  $handler->display->display_options['fields']['field_episode_number']['table'] = 'field_data_field_episode_number';
  $handler->display->display_options['fields']['field_episode_number']['field'] = 'field_episode_number';
  $handler->display->display_options['fields']['field_episode_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Received Filename */
  $handler->display->display_options['fields']['field_expected_filename']['id'] = 'field_expected_filename';
  $handler->display->display_options['fields']['field_expected_filename']['table'] = 'field_data_field_expected_filename';
  $handler->display->display_options['fields']['field_expected_filename']['field'] = 'field_expected_filename';
  $handler->display->display_options['fields']['field_expected_filename']['label'] = 'Filename';
  $handler->display->display_options['fields']['field_expected_filename']['empty'] = '<a style="margin-left:auto; margin-right:auto; display:block" href="/node/[nid]/upload"><img src="/sites/default/files/15107_wpm_lowres.png" width="25px" alt="Upload now" title="Upload now"/>Upload File</a>';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Schedule Show';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/node/[nid]/edit">Schedule Show</a>';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cm_show' => 'cm_show',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Is This a Special? (field_show_is_special) */
  $handler->display->display_options['filters']['field_show_is_special_value']['id'] = 'field_show_is_special_value';
  $handler->display->display_options['filters']['field_show_is_special_value']['table'] = 'field_data_field_show_is_special';
  $handler->display->display_options['filters']['field_show_is_special_value']['field'] = 'field_show_is_special_value';
  $handler->display->display_options['filters']['field_show_is_special_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_show_is_special_value']['group'] = 1;
  /* Filter criterion: Content: Project Type (field_cm_project_types) */
  $handler->display->display_options['filters']['field_cm_project_types_tid']['id'] = 'field_cm_project_types_tid';
  $handler->display->display_options['filters']['field_cm_project_types_tid']['table'] = 'field_data_field_cm_project_types';
  $handler->display->display_options['filters']['field_cm_project_types_tid']['field'] = 'field_cm_project_types_tid';
  $handler->display->display_options['filters']['field_cm_project_types_tid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['field_cm_project_types_tid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_cm_project_types_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_cm_project_types_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_cm_project_types_tid']['vocabulary'] = 'cm_project_types';
  /* Filter criterion: Content: Live (field_live) */
  $handler->display->display_options['filters']['field_live_value']['id'] = 'field_live_value';
  $handler->display->display_options['filters']['field_live_value']['table'] = 'field_data_field_live';
  $handler->display->display_options['filters']['field_live_value']['field'] = 'field_live_value';
  $handler->display->display_options['filters']['field_live_value']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['field_live_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_live_value']['group'] = 1;
  /* Filter criterion: Content: Project Type (field_cm_project_types) */
  $handler->display->display_options['filters']['field_cm_project_types_tid_1']['id'] = 'field_cm_project_types_tid_1';
  $handler->display->display_options['filters']['field_cm_project_types_tid_1']['table'] = 'field_data_field_cm_project_types';
  $handler->display->display_options['filters']['field_cm_project_types_tid_1']['field'] = 'field_cm_project_types_tid';
  $handler->display->display_options['filters']['field_cm_project_types_tid_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['field_cm_project_types_tid_1']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_cm_project_types_tid_1']['group'] = 2;
  $handler->display->display_options['filters']['field_cm_project_types_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_cm_project_types_tid_1']['vocabulary'] = 'cm_project_types';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  /* Filter criterion: Content: Is This a Special? (field_show_is_special) */
  $handler->display->display_options['filters']['field_show_is_special_value_1']['id'] = 'field_show_is_special_value_1';
  $handler->display->display_options['filters']['field_show_is_special_value_1']['table'] = 'field_data_field_show_is_special';
  $handler->display->display_options['filters']['field_show_is_special_value_1']['field'] = 'field_show_is_special_value';
  $handler->display->display_options['filters']['field_show_is_special_value_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_show_is_special_value_1']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'cm_show' => 'cm_show',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Content: Live (field_live) */
  $handler->display->display_options['filters']['field_live_value_1']['id'] = 'field_live_value_1';
  $handler->display->display_options['filters']['field_live_value_1']['table'] = 'field_data_field_live';
  $handler->display->display_options['filters']['field_live_value_1']['field'] = 'field_live_value';
  $handler->display->display_options['filters']['field_live_value_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['field_live_value_1']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_live_value_1']['group'] = 2;
  $handler->display->display_options['path'] = 'admin/shows/new-episodes';

  /* Display: Repeat Shows of Live Airings Missing Files */
  $handler = $view->new_display('block', 'Repeat Shows of Live Airings Missing Files', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Repeat Shows of Live Airings Missing Files';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="/admin/programming/shows/live-repeat-missing-file">See All</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_airing_show_ref_airing']['id'] = 'reverse_field_airing_show_ref_airing';
  $handler->display->display_options['relationships']['reverse_field_airing_show_ref_airing']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_airing_show_ref_airing']['field'] = 'reverse_field_airing_show_ref_airing';
  $handler->display->display_options['relationships']['reverse_field_airing_show_ref_airing']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Project */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: TV Guide Title */
  $handler->display->display_options['fields']['field_tv_guide_title']['id'] = 'field_tv_guide_title';
  $handler->display->display_options['fields']['field_tv_guide_title']['table'] = 'field_data_field_tv_guide_title';
  $handler->display->display_options['fields']['field_tv_guide_title']['field'] = 'field_tv_guide_title';
  $handler->display->display_options['fields']['field_tv_guide_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tv_guide_title']['alter']['text'] = '<a href="/node/[nid]">[field_tv_guide_title]</a>';
  /* Field: Airing: Date */
  $handler->display->display_options['fields']['field_airing_date']['id'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['field'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['relationship'] = 'reverse_field_airing_show_ref_airing';
  $handler->display->display_options['fields']['field_airing_date']['label'] = 'Live Air Date';
  $handler->display->display_options['fields']['field_airing_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Upload';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a style="margin-left:auto; margin-right:auto; display:block"           
          href="/node/[nid]/upload">                                      
          <img src="/sites/default/files/15107_wpm_lowres.png" width="25px"     
            alt="Upload now" title="Upload now"/>                               
           Upload File                                                          
        </a> ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Airing: Date -  start date (field_airing_date) */
  $handler->display->display_options['sorts']['field_airing_date_value']['id'] = 'field_airing_date_value';
  $handler->display->display_options['sorts']['field_airing_date_value']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['sorts']['field_airing_date_value']['field'] = 'field_airing_date_value';
  $handler->display->display_options['sorts']['field_airing_date_value']['relationship'] = 'reverse_field_airing_show_ref_airing';
  $handler->display->display_options['sorts']['field_airing_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cm_show' => 'cm_show',
  );
  /* Filter criterion: Content: Received Filename (field_expected_filename) */
  $handler->display->display_options['filters']['field_expected_filename_value']['id'] = 'field_expected_filename_value';
  $handler->display->display_options['filters']['field_expected_filename_value']['table'] = 'field_data_field_expected_filename';
  $handler->display->display_options['filters']['field_expected_filename_value']['field'] = 'field_expected_filename_value';
  $handler->display->display_options['filters']['field_expected_filename_value']['operator'] = 'empty';
  /* Filter criterion: Airing: Date -  start date (field_airing_date) */
  $handler->display->display_options['filters']['field_airing_date_value']['id'] = 'field_airing_date_value';
  $handler->display->display_options['filters']['field_airing_date_value']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['filters']['field_airing_date_value']['field'] = 'field_airing_date_value';
  $handler->display->display_options['filters']['field_airing_date_value']['relationship'] = 'reverse_field_airing_show_ref_airing';
  $handler->display->display_options['filters']['field_airing_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_airing_date_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_airing_date_value']['default_date'] = 'now';
  /* Filter criterion: Field: Live Source (field_live_source) */
  $handler->display->display_options['filters']['field_live_source_value']['id'] = 'field_live_source_value';
  $handler->display->display_options['filters']['field_live_source_value']['table'] = 'field_data_field_live_source';
  $handler->display->display_options['filters']['field_live_source_value']['field'] = 'field_live_source_value';
  $handler->display->display_options['filters']['field_live_source_value']['relationship'] = 'reverse_field_airing_show_ref_airing';
  $handler->display->display_options['filters']['field_live_source_value']['value'] = array(
    20 => '20',
    21 => '21',
    1 => '1',
    5 => '5',
    3 => '3',
    6 => '6',
    7 => '7',
    9 => '9',
    10 => '10',
    11 => '11',
    12 => '12',
    13 => '13',
    14 => '14',
    15 => '15',
    16 => '16',
    17 => '17',
    18 => '18',
    19 => '19',
  );

  /* Display: Repeat Shows of Live Airings Missing Files Page */
  $handler = $view->new_display('page', 'Repeat Shows of Live Airings Missing Files Page', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Repeat Shows of Live Airings Missing Files';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_airing_show_ref_airing']['id'] = 'reverse_field_airing_show_ref_airing';
  $handler->display->display_options['relationships']['reverse_field_airing_show_ref_airing']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_airing_show_ref_airing']['field'] = 'reverse_field_airing_show_ref_airing';
  $handler->display->display_options['relationships']['reverse_field_airing_show_ref_airing']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Project */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: TV Guide Title */
  $handler->display->display_options['fields']['field_tv_guide_title']['id'] = 'field_tv_guide_title';
  $handler->display->display_options['fields']['field_tv_guide_title']['table'] = 'field_data_field_tv_guide_title';
  $handler->display->display_options['fields']['field_tv_guide_title']['field'] = 'field_tv_guide_title';
  $handler->display->display_options['fields']['field_tv_guide_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tv_guide_title']['alter']['text'] = '<a href="/node/[nid]">[field_tv_guide_title]</a>';
  /* Field: Airing: Date */
  $handler->display->display_options['fields']['field_airing_date']['id'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['field'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['relationship'] = 'reverse_field_airing_show_ref_airing';
  $handler->display->display_options['fields']['field_airing_date']['label'] = 'Live Air Date';
  $handler->display->display_options['fields']['field_airing_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Upload';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a style="margin-left:auto; margin-right:auto; display:block"           
          href="/node/[nid]/upload">                                      
          <img src="/sites/default/files/15107_wpm_lowres.png" width="25px"     
            alt="Upload now" title="Upload now"/>                               
           Upload File                                                          
        </a> ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Airing: Date -  start date (field_airing_date) */
  $handler->display->display_options['sorts']['field_airing_date_value']['id'] = 'field_airing_date_value';
  $handler->display->display_options['sorts']['field_airing_date_value']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['sorts']['field_airing_date_value']['field'] = 'field_airing_date_value';
  $handler->display->display_options['sorts']['field_airing_date_value']['relationship'] = 'reverse_field_airing_show_ref_airing';
  $handler->display->display_options['sorts']['field_airing_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cm_show' => 'cm_show',
  );
  /* Filter criterion: Content: Received Filename (field_expected_filename) */
  $handler->display->display_options['filters']['field_expected_filename_value']['id'] = 'field_expected_filename_value';
  $handler->display->display_options['filters']['field_expected_filename_value']['table'] = 'field_data_field_expected_filename';
  $handler->display->display_options['filters']['field_expected_filename_value']['field'] = 'field_expected_filename_value';
  $handler->display->display_options['filters']['field_expected_filename_value']['operator'] = 'empty';
  /* Filter criterion: Airing: Date -  start date (field_airing_date) */
  $handler->display->display_options['filters']['field_airing_date_value']['id'] = 'field_airing_date_value';
  $handler->display->display_options['filters']['field_airing_date_value']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['filters']['field_airing_date_value']['field'] = 'field_airing_date_value';
  $handler->display->display_options['filters']['field_airing_date_value']['relationship'] = 'reverse_field_airing_show_ref_airing';
  $handler->display->display_options['filters']['field_airing_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_airing_date_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_airing_date_value']['default_date'] = 'now';
  /* Filter criterion: Field: Live Source (field_live_source) */
  $handler->display->display_options['filters']['field_live_source_value']['id'] = 'field_live_source_value';
  $handler->display->display_options['filters']['field_live_source_value']['table'] = 'field_data_field_live_source';
  $handler->display->display_options['filters']['field_live_source_value']['field'] = 'field_live_source_value';
  $handler->display->display_options['filters']['field_live_source_value']['relationship'] = 'reverse_field_airing_show_ref_airing';
  $handler->display->display_options['filters']['field_live_source_value']['value'] = array(
    'all' => 'all',
    20 => '20',
    21 => '21',
    1 => '1',
    5 => '5',
    3 => '3',
    6 => '6',
    7 => '7',
    8 => '8',
    9 => '9',
    10 => '10',
    11 => '11',
    12 => '12',
    13 => '13',
    14 => '14',
    15 => '15',
    16 => '16',
    17 => '17',
    18 => '18',
    19 => '19',
  );
  $handler->display->display_options['path'] = 'admin/programming/shows/live-repeat-missing-file';
  $export['show_admin_displays'] = $view;

  $view = new view();
  $view->name = 'show_request_daily_airings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'cm_airing';
  $view->human_name = 'Show Request: Daily Airings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Show Request: Daily Airings';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Airings for this date.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Airing: Airing ID */
  $handler->display->display_options['fields']['airing_id']['id'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['table'] = 'cm_airing';
  $handler->display->display_options['fields']['airing_id']['field'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['label'] = '';
  $handler->display->display_options['fields']['airing_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['airing_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['airing_id']['separator'] = '';
  /* Field: Airing: Date */
  $handler->display->display_options['fields']['field_airing_date']['id'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['field'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Airing: Title */
  $handler->display->display_options['fields']['field_airing_title']['id'] = 'field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['table'] = 'field_data_field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['field'] = 'field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_airing_title']['alter']['path'] = 'airing/[airing_id]';
  /* Field: Field: Channel */
  $handler->display->display_options['fields']['field_airing_channel']['id'] = 'field_airing_channel';
  $handler->display->display_options['fields']['field_airing_channel']['table'] = 'field_data_field_airing_channel';
  $handler->display->display_options['fields']['field_airing_channel']['field'] = 'field_airing_channel';
  /* Field: Field: Live Source */
  $handler->display->display_options['fields']['field_live_source']['id'] = 'field_live_source';
  $handler->display->display_options['fields']['field_live_source']['table'] = 'field_data_field_live_source';
  $handler->display->display_options['fields']['field_live_source']['field'] = 'field_live_source';
  /* Field: Airing: Airing Grid Link */
  $handler->display->display_options['fields']['field_airing_grid_link']['id'] = 'field_airing_grid_link';
  $handler->display->display_options['fields']['field_airing_grid_link']['table'] = 'field_data_field_airing_grid_link';
  $handler->display->display_options['fields']['field_airing_grid_link']['field'] = 'field_airing_grid_link';
  $handler->display->display_options['fields']['field_airing_grid_link']['label'] = 'Airing Grid';
  $handler->display->display_options['fields']['field_airing_grid_link']['type'] = 'computed_field_unsanitized';
  /* Sort criterion: Airing: Date -  start date (field_airing_date) */
  $handler->display->display_options['sorts']['field_airing_date_value']['id'] = 'field_airing_date_value';
  $handler->display->display_options['sorts']['field_airing_date_value']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['sorts']['field_airing_date_value']['field'] = 'field_airing_date_value';
  /* Contextual filter: Airing: Date -  start date (field_airing_date) */
  $handler->display->display_options['arguments']['field_airing_date_value']['id'] = 'field_airing_date_value';
  $handler->display->display_options['arguments']['field_airing_date_value']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['arguments']['field_airing_date_value']['field'] = 'field_airing_date_value';
  $handler->display->display_options['arguments']['field_airing_date_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_airing_date_value']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_airing_date_value']['title'] = 'Airings for %1';
  $handler->display->display_options['arguments']['field_airing_date_value']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['field_airing_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_airing_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_airing_date_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_airing_date_value']['granularity'] = 'day';

  /* Display: Channel Page */
  $handler = $view->new_display('page', 'Channel Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Show Request: Daily Channel Airings';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Airing: Date -  start date (field_airing_date) */
  $handler->display->display_options['arguments']['field_airing_date_value']['id'] = 'field_airing_date_value';
  $handler->display->display_options['arguments']['field_airing_date_value']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['arguments']['field_airing_date_value']['field'] = 'field_airing_date_value';
  $handler->display->display_options['arguments']['field_airing_date_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_airing_date_value']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_airing_date_value']['title'] = 'Airings for %1';
  $handler->display->display_options['arguments']['field_airing_date_value']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['field_airing_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_airing_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_airing_date_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_airing_date_value']['granularity'] = 'day';
  /* Contextual filter: Field: Channel (field_airing_channel) */
  $handler->display->display_options['arguments']['field_airing_channel_tid']['id'] = 'field_airing_channel_tid';
  $handler->display->display_options['arguments']['field_airing_channel_tid']['table'] = 'field_data_field_airing_channel';
  $handler->display->display_options['arguments']['field_airing_channel_tid']['field'] = 'field_airing_channel_tid';
  $handler->display->display_options['arguments']['field_airing_channel_tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_airing_channel_tid']['title'] = '%1 Daily Airings For a Channel';
  $handler->display->display_options['arguments']['field_airing_channel_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_airing_channel_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_airing_channel_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_airing_channel_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'admin/programming/airings/day/channel';

  /* Display: Source Page */
  $handler = $view->new_display('page', 'Source Page', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Show Request: Daily Source Airings';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Airing: Date -  start date (field_airing_date) */
  $handler->display->display_options['arguments']['field_airing_date_value']['id'] = 'field_airing_date_value';
  $handler->display->display_options['arguments']['field_airing_date_value']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['arguments']['field_airing_date_value']['field'] = 'field_airing_date_value';
  $handler->display->display_options['arguments']['field_airing_date_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_airing_date_value']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_airing_date_value']['title'] = 'Airings for %1';
  $handler->display->display_options['arguments']['field_airing_date_value']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['field_airing_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_airing_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_airing_date_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_airing_date_value']['granularity'] = 'day';
  /* Contextual filter: Field: Live Source (field_live_source) */
  $handler->display->display_options['arguments']['field_live_source_value']['id'] = 'field_live_source_value';
  $handler->display->display_options['arguments']['field_live_source_value']['table'] = 'field_data_field_live_source';
  $handler->display->display_options['arguments']['field_live_source_value']['field'] = 'field_live_source_value';
  $handler->display->display_options['arguments']['field_live_source_value']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_live_source_value']['title'] = '%1 Daily Airings For a Source';
  $handler->display->display_options['arguments']['field_live_source_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_live_source_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_live_source_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_live_source_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_live_source_value']['limit'] = '0';
  $handler->display->display_options['path'] = 'admin/programming/airings/day/source';
  $export['show_request_daily_airings'] = $view;

  $view = new view();
  $view->name = 'show_request_scheduling_information';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Show Request: Scheduling Information';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Show Request Scheduling Information';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Series Frequency */
  $handler->display->display_options['fields']['field_series_frequency']['id'] = 'field_series_frequency';
  $handler->display->display_options['fields']['field_series_frequency']['table'] = 'field_data_field_series_frequency';
  $handler->display->display_options['fields']['field_series_frequency']['field'] = 'field_series_frequency';
  $handler->display->display_options['fields']['field_series_frequency']['label'] = '';
  $handler->display->display_options['fields']['field_series_frequency']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_series_frequency']['alter']['text'] = '<strong>Series Frequency</strong>: [field_series_frequency]';
  $handler->display->display_options['fields']['field_series_frequency']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_frequency']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Keep Current Programming Schedule? */
  $handler->display->display_options['fields']['field_series_keep_schedule']['id'] = 'field_series_keep_schedule';
  $handler->display->display_options['fields']['field_series_keep_schedule']['table'] = 'field_data_field_series_keep_schedule';
  $handler->display->display_options['fields']['field_series_keep_schedule']['field'] = 'field_series_keep_schedule';
  $handler->display->display_options['fields']['field_series_keep_schedule']['label'] = '';
  $handler->display->display_options['fields']['field_series_keep_schedule']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_series_keep_schedule']['alter']['text'] = '<strong>Keep Current Schedule?:</strong> Yes';
  $handler->display->display_options['fields']['field_series_keep_schedule']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_keep_schedule']['empty'] = '<strong>Keep Current Schedule?:</strong> No';
  $handler->display->display_options['fields']['field_series_keep_schedule']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_series_keep_schedule']['type'] = 'list_key';
  /* Field: Content: Runtime */
  $handler->display->display_options['fields']['field_runtime_default']['id'] = 'field_runtime_default';
  $handler->display->display_options['fields']['field_runtime_default']['table'] = 'field_data_field_runtime_default';
  $handler->display->display_options['fields']['field_runtime_default']['field'] = 'field_runtime_default';
  $handler->display->display_options['fields']['field_runtime_default']['label'] = '';
  $handler->display->display_options['fields']['field_runtime_default']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_runtime_default']['alter']['text'] = '<strong>Runtime Default:</strong> [field_runtime_default] ';
  $handler->display->display_options['fields']['field_runtime_default']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_runtime_default']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Playback Preferences */
  $handler->display->display_options['fields']['field_playback_preferences']['id'] = 'field_playback_preferences';
  $handler->display->display_options['fields']['field_playback_preferences']['table'] = 'field_data_field_playback_preferences';
  $handler->display->display_options['fields']['field_playback_preferences']['field'] = 'field_playback_preferences';
  $handler->display->display_options['fields']['field_playback_preferences']['label'] = '';
  $handler->display->display_options['fields']['field_playback_preferences']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_playback_preferences']['alter']['text'] = '<strong>Playback Preferences:</strong>[field_playback_preferences]';
  $handler->display->display_options['fields']['field_playback_preferences']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_playback_preferences']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_playback_preferences']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_playback_preferences']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cm_show' => 'cm_show',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $export['show_request_scheduling_information'] = $view;

  $view = new view();
  $view->name = 'shows';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Shows';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Shows';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access content overview';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'sid' => 'sid',
    'field_premier_date' => 'field_premier_date',
    'title' => 'title',
    'field_season' => 'field_season',
    'og_group_ref' => 'og_group_ref',
    'name' => 'name',
    'gid' => 'gid',
    'field_cablecast_project_id' => 'field_cablecast_project_id',
    'field_cablecast_show_id' => 'field_cablecast_show_id',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_premier_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_season' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'gid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cablecast_project_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cablecast_show_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::workflow_vbo_given_state_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Premiere Date */
  $handler->display->display_options['fields']['field_premier_date']['id'] = 'field_premier_date';
  $handler->display->display_options['fields']['field_premier_date']['table'] = 'field_data_field_premier_date';
  $handler->display->display_options['fields']['field_premier_date']['field'] = 'field_premier_date';
  $handler->display->display_options['fields']['field_premier_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: TV Guide Title */
  $handler->display->display_options['fields']['field_tv_guide_title']['id'] = 'field_tv_guide_title';
  $handler->display->display_options['fields']['field_tv_guide_title']['table'] = 'field_data_field_tv_guide_title';
  $handler->display->display_options['fields']['field_tv_guide_title']['field'] = 'field_tv_guide_title';
  $handler->display->display_options['fields']['field_tv_guide_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tv_guide_title']['alter']['text'] = '<a href="/node/[nid]">[field_tv_guide_title]</a>';
  /* Field: Content: Project */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* Field: OG membership: Group ID */
  $handler->display->display_options['fields']['gid']['id'] = 'gid';
  $handler->display->display_options['fields']['gid']['table'] = 'og_membership';
  $handler->display->display_options['fields']['gid']['field'] = 'gid';
  $handler->display->display_options['fields']['gid']['label'] = 'Project ID';
  $handler->display->display_options['fields']['gid']['separator'] = '';
  /* Field: Content: Cablecast Project ID */
  $handler->display->display_options['fields']['field_cablecast_project_id']['id'] = 'field_cablecast_project_id';
  $handler->display->display_options['fields']['field_cablecast_project_id']['table'] = 'field_data_field_cablecast_project_id';
  $handler->display->display_options['fields']['field_cablecast_project_id']['field'] = 'field_cablecast_project_id';
  $handler->display->display_options['fields']['field_cablecast_project_id']['relationship'] = 'og_membership_related_node_group';
  /* Field: Content: Cablecast Show ID */
  $handler->display->display_options['fields']['field_cablecast_show_id']['id'] = 'field_cablecast_show_id';
  $handler->display->display_options['fields']['field_cablecast_show_id']['table'] = 'field_data_field_cablecast_show_id';
  $handler->display->display_options['fields']['field_cablecast_show_id']['field'] = 'field_cablecast_show_id';
  $handler->display->display_options['fields']['field_cablecast_show_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Field: Content: Approximate Duration */
  $handler->display->display_options['fields']['field_runtime']['id'] = 'field_runtime';
  $handler->display->display_options['fields']['field_runtime']['table'] = 'field_data_field_runtime';
  $handler->display->display_options['fields']['field_runtime']['field'] = 'field_runtime';
  $handler->display->display_options['fields']['field_runtime']['settings'] = array(
    'format' => 'h:mm:ss',
    'leading_zero' => 1,
  );
  /* Field: Content: Was this show produced in the Metropolitan Portland area? */
  $handler->display->display_options['fields']['field_produced_where']['id'] = 'field_produced_where';
  $handler->display->display_options['fields']['field_produced_where']['table'] = 'field_data_field_produced_where';
  $handler->display->display_options['fields']['field_produced_where']['field'] = 'field_produced_where';
  /* Field: Content: Was this show produced in PCM studios or using PCM equipment? */
  $handler->display->display_options['fields']['field_pcm_facilities']['id'] = 'field_pcm_facilities';
  $handler->display->display_options['fields']['field_pcm_facilities']['table'] = 'field_data_field_pcm_facilities';
  $handler->display->display_options['fields']['field_pcm_facilities']['field'] = 'field_pcm_facilities';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: OG membership: Entity id */
  $handler->display->display_options['arguments']['etid']['id'] = 'etid';
  $handler->display->display_options['arguments']['etid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['etid']['field'] = 'etid';
  $handler->display->display_options['arguments']['etid']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['etid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['etid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['etid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Show Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cm_show' => 'cm_show',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Premiere Date (field_premier_date) */
  $handler->display->display_options['filters']['field_premier_date_value']['id'] = 'field_premier_date_value';
  $handler->display->display_options['filters']['field_premier_date_value']['table'] = 'field_data_field_premier_date';
  $handler->display->display_options['filters']['field_premier_date_value']['field'] = 'field_premier_date_value';
  $handler->display->display_options['filters']['field_premier_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_premier_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_premier_date_value']['expose']['operator_id'] = 'field_premier_date_value_op';
  $handler->display->display_options['filters']['field_premier_date_value']['expose']['label'] = 'Premier Date';
  $handler->display->display_options['filters']['field_premier_date_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_premier_date_value']['expose']['operator'] = 'field_premier_date_value_op';
  $handler->display->display_options['filters']['field_premier_date_value']['expose']['identifier'] = 'field_premier_date_value';
  $handler->display->display_options['filters']['field_premier_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  $handler->display->display_options['filters']['field_premier_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Adult Content (field_objectionable_content) */
  $handler->display->display_options['filters']['field_objectionable_content_value']['id'] = 'field_objectionable_content_value';
  $handler->display->display_options['filters']['field_objectionable_content_value']['table'] = 'field_data_field_objectionable_content';
  $handler->display->display_options['filters']['field_objectionable_content_value']['field'] = 'field_objectionable_content_value';
  $handler->display->display_options['filters']['field_objectionable_content_value']['group'] = 1;
  $handler->display->display_options['filters']['field_objectionable_content_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_objectionable_content_value']['expose']['operator_id'] = 'field_objectionable_content_value_op';
  $handler->display->display_options['filters']['field_objectionable_content_value']['expose']['label'] = 'Adult Content';
  $handler->display->display_options['filters']['field_objectionable_content_value']['expose']['operator'] = 'field_objectionable_content_value_op';
  $handler->display->display_options['filters']['field_objectionable_content_value']['expose']['identifier'] = 'field_objectionable_content_value';
  $handler->display->display_options['filters']['field_objectionable_content_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  /* Filter criterion: Content: Cablecast Show ID (field_cablecast_show_id) */
  $handler->display->display_options['filters']['field_cablecast_show_id_value']['id'] = 'field_cablecast_show_id_value';
  $handler->display->display_options['filters']['field_cablecast_show_id_value']['table'] = 'field_data_field_cablecast_show_id';
  $handler->display->display_options['filters']['field_cablecast_show_id_value']['field'] = 'field_cablecast_show_id_value';
  $handler->display->display_options['filters']['field_cablecast_show_id_value']['group'] = 1;
  $handler->display->display_options['filters']['field_cablecast_show_id_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cablecast_show_id_value']['expose']['operator_id'] = 'field_cablecast_show_id_value_op';
  $handler->display->display_options['filters']['field_cablecast_show_id_value']['expose']['label'] = 'Cablecast Show ID';
  $handler->display->display_options['filters']['field_cablecast_show_id_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_cablecast_show_id_value']['expose']['operator'] = 'field_cablecast_show_id_value_op';
  $handler->display->display_options['filters']['field_cablecast_show_id_value']['expose']['identifier'] = 'field_cablecast_show_id_value';
  $handler->display->display_options['filters']['field_cablecast_show_id_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_cablecast_show_id_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'field_season_target_id';
  $handler->display->display_options['filters']['title_1']['group'] = 1;
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'season_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Season';
  $handler->display->display_options['filters']['title_1']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'season_title';
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  /* Filter criterion: Content: Has this show been produced at another CAN facility and aired on channel 11? (field_can11) */
  $handler->display->display_options['filters']['field_can11_value']['id'] = 'field_can11_value';
  $handler->display->display_options['filters']['field_can11_value']['table'] = 'field_data_field_can11';
  $handler->display->display_options['filters']['field_can11_value']['field'] = 'field_can11_value';
  $handler->display->display_options['filters']['field_can11_value']['group'] = 1;
  $handler->display->display_options['filters']['field_can11_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_can11_value']['expose']['operator_id'] = 'field_can11_value_op';
  $handler->display->display_options['filters']['field_can11_value']['expose']['label'] = 'Channel 11?';
  $handler->display->display_options['filters']['field_can11_value']['expose']['operator'] = 'field_can11_value_op';
  $handler->display->display_options['filters']['field_can11_value']['expose']['identifier'] = 'field_can11_value';
  $handler->display->display_options['filters']['field_can11_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  /* Filter criterion: Content: Closed Captions (field_closed_captions) */
  $handler->display->display_options['filters']['field_closed_captions_value']['id'] = 'field_closed_captions_value';
  $handler->display->display_options['filters']['field_closed_captions_value']['table'] = 'field_data_field_closed_captions';
  $handler->display->display_options['filters']['field_closed_captions_value']['field'] = 'field_closed_captions_value';
  $handler->display->display_options['filters']['field_closed_captions_value']['group'] = 1;
  $handler->display->display_options['filters']['field_closed_captions_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_closed_captions_value']['expose']['operator_id'] = 'field_closed_captions_value_op';
  $handler->display->display_options['filters']['field_closed_captions_value']['expose']['label'] = 'Closed Captions';
  $handler->display->display_options['filters']['field_closed_captions_value']['expose']['operator'] = 'field_closed_captions_value_op';
  $handler->display->display_options['filters']['field_closed_captions_value']['expose']['identifier'] = 'field_closed_captions_value';
  $handler->display->display_options['filters']['field_closed_captions_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  /* Filter criterion: Content: Duplication Release (field_duplication_release) */
  $handler->display->display_options['filters']['field_duplication_release_value']['id'] = 'field_duplication_release_value';
  $handler->display->display_options['filters']['field_duplication_release_value']['table'] = 'field_data_field_duplication_release';
  $handler->display->display_options['filters']['field_duplication_release_value']['field'] = 'field_duplication_release_value';
  $handler->display->display_options['filters']['field_duplication_release_value']['group'] = 1;
  $handler->display->display_options['filters']['field_duplication_release_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_duplication_release_value']['expose']['operator_id'] = 'field_duplication_release_value_op';
  $handler->display->display_options['filters']['field_duplication_release_value']['expose']['label'] = 'Duplication Release';
  $handler->display->display_options['filters']['field_duplication_release_value']['expose']['operator'] = 'field_duplication_release_value_op';
  $handler->display->display_options['filters']['field_duplication_release_value']['expose']['identifier'] = 'field_duplication_release_value';
  $handler->display->display_options['filters']['field_duplication_release_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  /* Filter criterion: Content: Episode Number (field_episode_number) */
  $handler->display->display_options['filters']['field_episode_number_value']['id'] = 'field_episode_number_value';
  $handler->display->display_options['filters']['field_episode_number_value']['table'] = 'field_data_field_episode_number';
  $handler->display->display_options['filters']['field_episode_number_value']['field'] = 'field_episode_number_value';
  $handler->display->display_options['filters']['field_episode_number_value']['group'] = 1;
  $handler->display->display_options['filters']['field_episode_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_episode_number_value']['expose']['operator_id'] = 'field_episode_number_value_op';
  $handler->display->display_options['filters']['field_episode_number_value']['expose']['label'] = 'Episode Number';
  $handler->display->display_options['filters']['field_episode_number_value']['expose']['operator'] = 'field_episode_number_value_op';
  $handler->display->display_options['filters']['field_episode_number_value']['expose']['identifier'] = 'field_episode_number_value';
  $handler->display->display_options['filters']['field_episode_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  /* Filter criterion: Content: Filler (field_filler) */
  $handler->display->display_options['filters']['field_filler_value']['id'] = 'field_filler_value';
  $handler->display->display_options['filters']['field_filler_value']['table'] = 'field_data_field_filler';
  $handler->display->display_options['filters']['field_filler_value']['field'] = 'field_filler_value';
  $handler->display->display_options['filters']['field_filler_value']['group'] = 1;
  $handler->display->display_options['filters']['field_filler_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_filler_value']['expose']['operator_id'] = 'field_filler_value_op';
  $handler->display->display_options['filters']['field_filler_value']['expose']['label'] = 'Filler';
  $handler->display->display_options['filters']['field_filler_value']['expose']['operator'] = 'field_filler_value_op';
  $handler->display->display_options['filters']['field_filler_value']['expose']['identifier'] = 'field_filler_value';
  $handler->display->display_options['filters']['field_filler_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  /* Filter criterion: Content: Genres (field_pbcore_genres) */
  $handler->display->display_options['filters']['field_pbcore_genres_tid']['id'] = 'field_pbcore_genres_tid';
  $handler->display->display_options['filters']['field_pbcore_genres_tid']['table'] = 'field_data_field_pbcore_genres';
  $handler->display->display_options['filters']['field_pbcore_genres_tid']['field'] = 'field_pbcore_genres_tid';
  $handler->display->display_options['filters']['field_pbcore_genres_tid']['value'] = '';
  $handler->display->display_options['filters']['field_pbcore_genres_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pbcore_genres_tid']['vocabulary'] = 'pbcore_genres';
  /* Filter criterion: Content: Live (field_live) */
  $handler->display->display_options['filters']['field_live_value']['id'] = 'field_live_value';
  $handler->display->display_options['filters']['field_live_value']['table'] = 'field_data_field_live';
  $handler->display->display_options['filters']['field_live_value']['field'] = 'field_live_value';
  $handler->display->display_options['filters']['field_live_value']['group'] = 1;
  $handler->display->display_options['filters']['field_live_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_live_value']['expose']['operator_id'] = 'field_live_value_op';
  $handler->display->display_options['filters']['field_live_value']['expose']['label'] = 'Live';
  $handler->display->display_options['filters']['field_live_value']['expose']['operator'] = 'field_live_value_op';
  $handler->display->display_options['filters']['field_live_value']['expose']['identifier'] = 'field_live_value';
  $handler->display->display_options['filters']['field_live_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  /* Filter criterion: Content: Was this show produced in PCM studios or using PCM equipment? (field_pcm_facilities) */
  $handler->display->display_options['filters']['field_pcm_facilities_value']['id'] = 'field_pcm_facilities_value';
  $handler->display->display_options['filters']['field_pcm_facilities_value']['table'] = 'field_data_field_pcm_facilities';
  $handler->display->display_options['filters']['field_pcm_facilities_value']['field'] = 'field_pcm_facilities_value';
  $handler->display->display_options['filters']['field_pcm_facilities_value']['group'] = 1;
  $handler->display->display_options['filters']['field_pcm_facilities_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pcm_facilities_value']['expose']['operator_id'] = 'field_pcm_facilities_value_op';
  $handler->display->display_options['filters']['field_pcm_facilities_value']['expose']['label'] = 'PCM Equipment';
  $handler->display->display_options['filters']['field_pcm_facilities_value']['expose']['operator'] = 'field_pcm_facilities_value_op';
  $handler->display->display_options['filters']['field_pcm_facilities_value']['expose']['identifier'] = 'field_pcm_facilities_value';
  $handler->display->display_options['filters']['field_pcm_facilities_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  /* Filter criterion: Content: Previous Airing (field_pcm_channels) */
  $handler->display->display_options['filters']['field_pcm_channels_value']['id'] = 'field_pcm_channels_value';
  $handler->display->display_options['filters']['field_pcm_channels_value']['table'] = 'field_data_field_pcm_channels';
  $handler->display->display_options['filters']['field_pcm_channels_value']['field'] = 'field_pcm_channels_value';
  $handler->display->display_options['filters']['field_pcm_channels_value']['group'] = 1;
  $handler->display->display_options['filters']['field_pcm_channels_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pcm_channels_value']['expose']['operator_id'] = 'field_pcm_channels_value_op';
  $handler->display->display_options['filters']['field_pcm_channels_value']['expose']['label'] = 'Previous Airing';
  $handler->display->display_options['filters']['field_pcm_channels_value']['expose']['operator'] = 'field_pcm_channels_value_op';
  $handler->display->display_options['filters']['field_pcm_channels_value']['expose']['identifier'] = 'field_pcm_channels_value';
  $handler->display->display_options['filters']['field_pcm_channels_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  /* Filter criterion: Content: Production Type (field_format) */
  $handler->display->display_options['filters']['field_format_tid']['id'] = 'field_format_tid';
  $handler->display->display_options['filters']['field_format_tid']['table'] = 'field_data_field_format';
  $handler->display->display_options['filters']['field_format_tid']['field'] = 'field_format_tid';
  $handler->display->display_options['filters']['field_format_tid']['value'] = '';
  $handler->display->display_options['filters']['field_format_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_format_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_format_tid']['expose']['operator_id'] = 'field_format_tid_op';
  $handler->display->display_options['filters']['field_format_tid']['expose']['label'] = 'Production Type';
  $handler->display->display_options['filters']['field_format_tid']['expose']['operator'] = 'field_format_tid_op';
  $handler->display->display_options['filters']['field_format_tid']['expose']['identifier'] = 'field_format_tid';
  $handler->display->display_options['filters']['field_format_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_format_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  $handler->display->display_options['filters']['field_format_tid']['vocabulary'] = 'production_type';
  /* Filter criterion: Content: Production Location (field_where_produced) */
  $handler->display->display_options['filters']['field_where_produced_tid']['id'] = 'field_where_produced_tid';
  $handler->display->display_options['filters']['field_where_produced_tid']['table'] = 'field_data_field_where_produced';
  $handler->display->display_options['filters']['field_where_produced_tid']['field'] = 'field_where_produced_tid';
  $handler->display->display_options['filters']['field_where_produced_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_where_produced_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_where_produced_tid']['expose']['operator_id'] = 'field_where_produced_tid_op';
  $handler->display->display_options['filters']['field_where_produced_tid']['expose']['label'] = 'Production Location';
  $handler->display->display_options['filters']['field_where_produced_tid']['expose']['operator'] = 'field_where_produced_tid_op';
  $handler->display->display_options['filters']['field_where_produced_tid']['expose']['identifier'] = 'field_where_produced_tid';
  $handler->display->display_options['filters']['field_where_produced_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  $handler->display->display_options['filters']['field_where_produced_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_where_produced_tid']['vocabulary'] = 'where_produced';
  /* Filter criterion: Content: PBCore FCC Ratings (field_pbcore_fcc_ratings) */
  $handler->display->display_options['filters']['field_pbcore_fcc_ratings_tid']['id'] = 'field_pbcore_fcc_ratings_tid';
  $handler->display->display_options['filters']['field_pbcore_fcc_ratings_tid']['table'] = 'field_data_field_pbcore_fcc_ratings';
  $handler->display->display_options['filters']['field_pbcore_fcc_ratings_tid']['field'] = 'field_pbcore_fcc_ratings_tid';
  $handler->display->display_options['filters']['field_pbcore_fcc_ratings_tid']['value'] = '';
  $handler->display->display_options['filters']['field_pbcore_fcc_ratings_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pbcore_fcc_ratings_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pbcore_fcc_ratings_tid']['expose']['operator_id'] = 'field_pbcore_fcc_ratings_tid_op';
  $handler->display->display_options['filters']['field_pbcore_fcc_ratings_tid']['expose']['label'] = 'Rating';
  $handler->display->display_options['filters']['field_pbcore_fcc_ratings_tid']['expose']['operator'] = 'field_pbcore_fcc_ratings_tid_op';
  $handler->display->display_options['filters']['field_pbcore_fcc_ratings_tid']['expose']['identifier'] = 'field_pbcore_fcc_ratings_tid';
  $handler->display->display_options['filters']['field_pbcore_fcc_ratings_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  $handler->display->display_options['filters']['field_pbcore_fcc_ratings_tid']['vocabulary'] = 'pbcore_fcc_ratings';
  /* Filter criterion: Content: Received Filename (field_expected_filename) */
  $handler->display->display_options['filters']['field_expected_filename_value']['id'] = 'field_expected_filename_value';
  $handler->display->display_options['filters']['field_expected_filename_value']['table'] = 'field_data_field_expected_filename';
  $handler->display->display_options['filters']['field_expected_filename_value']['field'] = 'field_expected_filename_value';
  $handler->display->display_options['filters']['field_expected_filename_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_expected_filename_value']['group'] = 1;
  $handler->display->display_options['filters']['field_expected_filename_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_expected_filename_value']['expose']['operator_id'] = 'field_expected_filename_value_op';
  $handler->display->display_options['filters']['field_expected_filename_value']['expose']['label'] = 'Received Filename';
  $handler->display->display_options['filters']['field_expected_filename_value']['expose']['operator'] = 'field_expected_filename_value_op';
  $handler->display->display_options['filters']['field_expected_filename_value']['expose']['identifier'] = 'field_expected_filename_value';
  $handler->display->display_options['filters']['field_expected_filename_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  /* Filter criterion: Content: Approximate Duration (field_runtime) */
  $handler->display->display_options['filters']['field_runtime_value']['id'] = 'field_runtime_value';
  $handler->display->display_options['filters']['field_runtime_value']['table'] = 'field_data_field_runtime';
  $handler->display->display_options['filters']['field_runtime_value']['field'] = 'field_runtime_value';
  $handler->display->display_options['filters']['field_runtime_value']['group'] = 1;
  $handler->display->display_options['filters']['field_runtime_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_runtime_value']['expose']['operator_id'] = 'field_runtime_value_op';
  $handler->display->display_options['filters']['field_runtime_value']['expose']['label'] = 'Runtime';
  $handler->display->display_options['filters']['field_runtime_value']['expose']['operator'] = 'field_runtime_value_op';
  $handler->display->display_options['filters']['field_runtime_value']['expose']['identifier'] = 'field_runtime_value';
  $handler->display->display_options['filters']['field_runtime_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  /* Filter criterion: Content: Technical Requirements have been met. (field_technical_requirements) */
  $handler->display->display_options['filters']['field_technical_requirements_value']['id'] = 'field_technical_requirements_value';
  $handler->display->display_options['filters']['field_technical_requirements_value']['table'] = 'field_data_field_technical_requirements';
  $handler->display->display_options['filters']['field_technical_requirements_value']['field'] = 'field_technical_requirements_value';
  $handler->display->display_options['filters']['field_technical_requirements_value']['group'] = 1;
  $handler->display->display_options['filters']['field_technical_requirements_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_technical_requirements_value']['expose']['operator_id'] = 'field_technical_requirements_value_op';
  $handler->display->display_options['filters']['field_technical_requirements_value']['expose']['label'] = 'Technical Requirements';
  $handler->display->display_options['filters']['field_technical_requirements_value']['expose']['operator'] = 'field_technical_requirements_value_op';
  $handler->display->display_options['filters']['field_technical_requirements_value']['expose']['identifier'] = 'field_technical_requirements_value';
  $handler->display->display_options['filters']['field_technical_requirements_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  /* Filter criterion: OG membership: Group ID */
  $handler->display->display_options['filters']['gid']['id'] = 'gid';
  $handler->display->display_options['filters']['gid']['table'] = 'og_membership';
  $handler->display->display_options['filters']['gid']['field'] = 'gid';
  $handler->display->display_options['filters']['gid']['group'] = 1;
  $handler->display->display_options['filters']['gid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['gid']['expose']['operator_id'] = 'gid_op';
  $handler->display->display_options['filters']['gid']['expose']['label'] = 'Project ID';
  $handler->display->display_options['filters']['gid']['expose']['description'] = 'Drupal node';
  $handler->display->display_options['filters']['gid']['expose']['operator'] = 'gid_op';
  $handler->display->display_options['filters']['gid']['expose']['identifier'] = 'gid';
  $handler->display->display_options['filters']['gid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  /* Filter criterion: Content: Project Type (field_cm_project_types) */
  $handler->display->display_options['filters']['field_cm_project_types_tid']['id'] = 'field_cm_project_types_tid';
  $handler->display->display_options['filters']['field_cm_project_types_tid']['table'] = 'field_data_field_cm_project_types';
  $handler->display->display_options['filters']['field_cm_project_types_tid']['field'] = 'field_cm_project_types_tid';
  $handler->display->display_options['filters']['field_cm_project_types_tid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['field_cm_project_types_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_cm_project_types_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cm_project_types_tid']['expose']['operator_id'] = 'field_cm_project_types_tid_op';
  $handler->display->display_options['filters']['field_cm_project_types_tid']['expose']['label'] = 'Project Type';
  $handler->display->display_options['filters']['field_cm_project_types_tid']['expose']['operator'] = 'field_cm_project_types_tid_op';
  $handler->display->display_options['filters']['field_cm_project_types_tid']['expose']['identifier'] = 'field_cm_project_types_tid';
  $handler->display->display_options['filters']['field_cm_project_types_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  $handler->display->display_options['filters']['field_cm_project_types_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_cm_project_types_tid']['vocabulary'] = 'cm_project_types';
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['exposed'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['label'] = 'Created date';
  $handler->display->display_options['filters']['created']['expose']['description'] = 'CCYY-MM-DD HH:MM:SS';
  $handler->display->display_options['filters']['created']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
  $handler->display->display_options['filters']['created']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  /* Filter criterion: Content: Updated date */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'node';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['exposed'] = TRUE;
  $handler->display->display_options['filters']['changed']['expose']['operator_id'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['label'] = 'Updated date';
  $handler->display->display_options['filters']['changed']['expose']['description'] = 'CCYY-MM-DD HH:MM:SS';
  $handler->display->display_options['filters']['changed']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['changed']['expose']['operator'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['identifier'] = 'changed';
  $handler->display->display_options['filters']['changed']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['changed']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/projects/shows';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Shows';
  $handler->display->display_options['menu']['description'] = 'Manage shows';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'damin/projects/shows/export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['shows'] = $view;

  $view = new view();
  $view->name = 'shows_producer_dashboard';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Shows: Producer Dashboard';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '1';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'My Shows: Not Scheduled';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h2>My Shows: Not Scheduled</h2>
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<br/>
<i>This section is a list of all of shows attached to your account. Shows contain information about your media files. Some of this information is sent to TV Guide. Other information is used for programming purposes. A show is required to submit content. The "Media Status" column provides status updates about your submissions.</i>

<ul><li><i>Missing File! -- Upload
Show needs a media file</li>

<li><i>Complete: 
The media for the show is all set and ready for airing.</li></ul></i> 

<i>Important Information: All series show media submissions are required 48 hours in advance of a show\'s premiere date. It is the producer\'s responsibility to make arrangements for submission on public days. Any shows submitted after the 48 hour deadline will not air on the channels. Please contact the Programming Department directly at x131 or email playback@pcmtv.org if you need assistance of have any questions.</i>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'You have not submitted any shows yet. A show is a singular episode/special/promo of a project. You must have a Project before you can add Shows. Once you have Projects, you can add Shows by clicking the Add Show link for one of your Projects above. ';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_1']['label'] = 'Project';
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: TV Guide Title */
  $handler->display->display_options['fields']['field_tv_guide_title']['id'] = 'field_tv_guide_title';
  $handler->display->display_options['fields']['field_tv_guide_title']['table'] = 'field_data_field_tv_guide_title';
  $handler->display->display_options['fields']['field_tv_guide_title']['field'] = 'field_tv_guide_title';
  $handler->display->display_options['fields']['field_tv_guide_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tv_guide_title']['alter']['text'] = '<a href="/node/[nid]/edit?destination=dashboard">[field_tv_guide_title]</a>';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Media Status*';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
print pcm_show_filename_view_field($row);
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'Premiere Date';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
  print pcm_show_producer_dashboard_shows_premiere_date_field($row);
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Premiere Date (field_premier_date) */
  $handler->display->display_options['arguments']['field_premier_date_value']['id'] = 'field_premier_date_value';
  $handler->display->display_options['arguments']['field_premier_date_value']['table'] = 'field_data_field_premier_date';
  $handler->display->display_options['arguments']['field_premier_date_value']['field'] = 'field_premier_date_value';
  $handler->display->display_options['arguments']['field_premier_date_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_premier_date_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_premier_date_value']['default_argument_options']['argument'] = '2000-01-01--2016-04-15';
  $handler->display->display_options['arguments']['field_premier_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_premier_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_premier_date_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_premier_date_value']['year_range'] = '2000:2100';
  $handler->display->display_options['arguments']['field_premier_date_value']['granularity'] = 'day';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cm_show' => 'cm_show',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Is Placeholder? (field_is_placeholder) */
  $handler->display->display_options['filters']['field_is_placeholder_value']['id'] = 'field_is_placeholder_value';
  $handler->display->display_options['filters']['field_is_placeholder_value']['table'] = 'field_data_field_is_placeholder';
  $handler->display->display_options['filters']['field_is_placeholder_value']['field'] = 'field_is_placeholder_value';
  $handler->display->display_options['filters']['field_is_placeholder_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_is_placeholder_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_is_placeholder_value']['group'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'My Shows: Scheduled';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h2>My Shows: Scheduled</h2>
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';

  /* Display: Block 2 */
  $handler = $view->new_display('block', 'Block 2', 'block_2');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cm_show' => 'cm_show',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Is Placeholder? (field_is_placeholder) */
  $handler->display->display_options['filters']['field_is_placeholder_value']['id'] = 'field_is_placeholder_value';
  $handler->display->display_options['filters']['field_is_placeholder_value']['table'] = 'field_data_field_is_placeholder';
  $handler->display->display_options['filters']['field_is_placeholder_value']['field'] = 'field_is_placeholder_value';
  $handler->display->display_options['filters']['field_is_placeholder_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_is_placeholder_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_is_placeholder_value']['group'] = 1;
  /* Filter criterion: Content: Premiere Date (field_premier_date) */
  $handler->display->display_options['filters']['field_premier_date_value']['id'] = 'field_premier_date_value';
  $handler->display->display_options['filters']['field_premier_date_value']['table'] = 'field_data_field_premier_date';
  $handler->display->display_options['filters']['field_premier_date_value']['field'] = 'field_premier_date_value';
  $handler->display->display_options['filters']['field_premier_date_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_premier_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_premier_date_value']['year_range'] = '-10:+5';
  $export['shows_producer_dashboard'] = $view;

  $view = new view();
  $view->name = 'simple_show_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Simple Show Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Shows: Simple Search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'views_bulk_operations' => 'views_bulk_operations',
    'field_premier_date' => 'field_premier_date',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_premier_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Premiere Date */
  $handler->display->display_options['fields']['field_premier_date']['id'] = 'field_premier_date';
  $handler->display->display_options['fields']['field_premier_date']['table'] = 'field_data_field_premier_date';
  $handler->display->display_options['fields']['field_premier_date']['field'] = 'field_premier_date';
  $handler->display->display_options['fields']['field_premier_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_1']['label'] = 'Project';
  /* Field: Content: Received Filename */
  $handler->display->display_options['fields']['field_expected_filename']['id'] = 'field_expected_filename';
  $handler->display->display_options['fields']['field_expected_filename']['table'] = 'field_data_field_expected_filename';
  $handler->display->display_options['fields']['field_expected_filename']['field'] = 'field_expected_filename';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cm_show' => 'cm_show',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Show Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/programming/shows/simple-search';
  $export['simple_show_search'] = $view;

  return $export;
}
