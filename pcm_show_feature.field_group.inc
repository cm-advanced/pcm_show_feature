<?php
/**
 * @file
 * pcm_show_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pcm_show_feature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_file_upload|node|cm_show|form';
  $field_group->group_name = 'group_file_upload';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cm_show';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'File Upload',
    'weight' => '8',
    'children' => array(
      0 => 'field_expected_filename',
      1 => 'field_expected_file_format',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-file-upload field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_file_upload|node|cm_show|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|cm_show|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cm_show';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'PCM Information',
    'weight' => '2',
    'children' => array(
      0 => 'field_where_produced',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-general field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_general|node|cm_show|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program_details|node|cm_show|default';
  $field_group->group_name = 'group_program_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cm_show';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Show Details',
    'weight' => '3',
    'children' => array(
      0 => 'field_narrative',
      1 => 'field_pbcore_genres',
      2 => 'field_show_airings_view',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-program-details field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_program_details|node|cm_show|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program_details|node|cm_show|form';
  $field_group->group_name = 'group_program_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cm_show';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Show Details',
    'weight' => '3',
    'children' => array(
      0 => 'field_narrative',
      1 => 'field_pbcore_genres',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-program-details field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_program_details|node|cm_show|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program_details|node|cm_show|full';
  $field_group->group_name = 'group_program_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cm_show';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Show Details',
    'weight' => '3',
    'children' => array(
      0 => 'field_narrative',
      1 => 'field_pbcore_genres',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-program-details field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_program_details|node|cm_show|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_show_admin|node|cm_show|default';
  $field_group->group_name = 'group_show_admin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cm_show';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Admin',
    'weight' => '1',
    'children' => array(
      0 => 'field_expected_filename',
      1 => 'field_expected_file_format',
      2 => 'field_show_scheduling',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-show-admin field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_show_admin|node|cm_show|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_show_admin|node|cm_show|form';
  $field_group->group_name = 'group_show_admin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cm_show';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Admin',
    'weight' => '0',
    'children' => array(
      0 => 'field_cablecast_show_id',
      1 => 'field_premier_date',
      2 => 'field_is_placeholder',
      3 => 'field_show_scheduling',
      4 => 'field_show_placeholder_season',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-show-admin field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_show_admin|node|cm_show|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_show_admin|node|cm_show|full';
  $field_group->group_name = 'group_show_admin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cm_show';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Admin',
    'weight' => '1',
    'children' => array(
      0 => 'field_cablecast_show_id',
      1 => 'field_expected_filename',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-show-admin field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_show_admin|node|cm_show|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_show_playback_pref_default|node|cm_show|default';
  $field_group->group_name = 'group_show_playback_pref_default';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cm_show';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_show_schedule_request_info';
  $field_group->data = array(
    'label' => 'Playback Preferences',
    'weight' => '17',
    'children' => array(
      0 => 'field_playback_interval',
      1 => 'field_day_part',
      2 => 'field_playback_comments',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-show-playback-pref-default field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_show_playback_pref_default|node|cm_show|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_show_playback_pref_display|node|cm_show|teaser';
  $field_group->group_name = 'group_show_playback_pref_display';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cm_show';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_show_schedule_request_info';
  $field_group->data = array(
    'label' => 'Playback Preferences',
    'weight' => '30',
    'children' => array(
      0 => 'field_playback_interval',
      1 => 'field_day_part',
      2 => 'field_playback_comments',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-show-playback-pref-display field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_show_playback_pref_display|node|cm_show|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_show_playback_preferences|node|cm_show|form';
  $field_group->group_name = 'group_show_playback_preferences';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cm_show';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_show_schedule_request_info';
  $field_group->data = array(
    'label' => 'Playback Preferences',
    'weight' => '13',
    'children' => array(
      0 => 'field_day_part',
      1 => 'field_playback_comments',
      2 => 'field_playback_interval',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Playback Preferences',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-show-playback-preferences field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_show_playback_preferences|node|cm_show|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_show_project|node|cm_show|default';
  $field_group->group_name = 'group_show_project';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cm_show';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project and Title',
    'weight' => '0',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'field_short_description',
      2 => 'field_tv_guide_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-show-project field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_show_project|node|cm_show|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_show_project|node|cm_show|form';
  $field_group->group_name = 'group_show_project';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cm_show';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project and Title',
    'weight' => '1',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'field_short_description',
      2 => 'field_show_special_title',
      3 => 'field_tv_guide_title',
      4 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-show-project field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_show_project|node|cm_show|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_show_project|node|cm_show|full';
  $field_group->group_name = 'group_show_project';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cm_show';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project and Title',
    'weight' => '0',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'field_episode_number',
      2 => 'field_short_description',
      3 => 'field_tv_guide_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-show-project field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_show_project|node|cm_show|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_show_schedule_request_info|node|cm_show|default';
  $field_group->group_name = 'group_show_schedule_request_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cm_show';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Scheduling Request Info',
    'weight' => '2',
    'children' => array(
      0 => 'field_episode_number',
      1 => 'field_filler_end_date',
      2 => 'field_runtime',
      3 => 'field_pcm_facilities',
      4 => 'field_can11',
      5 => 'field_pcm_channels',
      6 => 'field_objectionable_content',
      7 => 'field_objectionable_content_conf',
      8 => 'field_filler',
      9 => 'field_duplication_release',
      10 => 'field_technical_requirements',
      11 => 'field_premier_date',
      12 => 'field_produced_city',
      13 => 'field_produced_where',
      14 => 'field_special_show_scheduling',
      15 => 'field_filler_start_date',
      16 => 'group_show_playback_pref_default',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-show-schedule-request-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_show_schedule_request_info|node|cm_show|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_show_schedule_request_info|node|cm_show|form';
  $field_group->group_name = 'group_show_schedule_request_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cm_show';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Scheduling Request Info',
    'weight' => '4',
    'children' => array(
      0 => 'field_episode_number',
      1 => 'field_filler_end_date',
      2 => 'field_runtime',
      3 => 'field_pcm_facilities',
      4 => 'field_can11',
      5 => 'field_pcm_channels',
      6 => 'field_objectionable_content',
      7 => 'field_objectionable_content_conf',
      8 => 'field_filler',
      9 => 'field_duplication_release',
      10 => 'field_technical_requirements',
      11 => 'field_filler_start_date',
      12 => 'field_produced_city',
      13 => 'field_produced_where',
      14 => 'field_show_is_special',
      15 => 'field_special_show_scheduling',
      16 => 'group_show_playback_preferences',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-show-schedule-request-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_show_schedule_request_info|node|cm_show|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_show_schedule_request_info|node|cm_show|full';
  $field_group->group_name = 'group_show_schedule_request_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cm_show';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Scheduling Request Info',
    'weight' => '2',
    'children' => array(
      0 => 'field_where_produced',
      1 => 'field_filler_end_date',
      2 => 'field_runtime',
      3 => 'field_pcm_facilities',
      4 => 'field_can11',
      5 => 'field_pcm_channels',
      6 => 'field_objectionable_content',
      7 => 'field_objectionable_content_conf',
      8 => 'field_filler',
      9 => 'field_duplication_release',
      10 => 'field_technical_requirements',
      11 => 'field_premier_date',
      12 => 'field_playback_preferences',
      13 => 'field_special_show_scheduling',
      14 => 'field_produced_where',
      15 => 'field_show_airings_view',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-show-schedule-request-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_show_schedule_request_info|node|cm_show|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_show_schedule_request_info|node|cm_show|teaser';
  $field_group->group_name = 'group_show_schedule_request_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cm_show';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Scheduling Request Info',
    'weight' => '0',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'field_episode_number',
      2 => 'field_where_produced',
      3 => 'field_filler_end_date',
      4 => 'field_runtime',
      5 => 'field_pcm_facilities',
      6 => 'field_can11',
      7 => 'field_pcm_channels',
      8 => 'field_objectionable_content',
      9 => 'field_objectionable_content_conf',
      10 => 'field_filler',
      11 => 'field_duplication_release',
      12 => 'field_technical_requirements',
      13 => 'field_short_description',
      14 => 'field_produced_city',
      15 => 'field_produced_where',
      16 => 'field_show_airings_view',
      17 => 'field_show_is_special',
      18 => 'field_special_show_scheduling',
      19 => 'field_tv_guide_title',
      20 => 'field_filler_start_date',
      21 => 'group_show_playback_pref_display',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-show-schedule-request-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_show_schedule_request_info|node|cm_show|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Admin');
  t('File Upload');
  t('PCM Information');
  t('Playback Preferences');
  t('Project and Title');
  t('Scheduling Request Info');
  t('Show Details');

  return $field_groups;
}
