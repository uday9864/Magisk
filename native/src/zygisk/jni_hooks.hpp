// Generated by gen_jni_hooks.py

namespace {

void *nativeForkAndSpecialize_orig = nullptr;
jint nativeForkAndSpecialize_l(JNIEnv *env, jclass clazz, jint uid, jint gid, jintArray gids, jint runtime_flags, jobjectArray rlimits, jint mount_external, jstring se_info, jstring nice_name, jintArray fds_to_close, jstring instruction_set, jstring app_data_dir) {
    AppSpecializeArgs_v3 args(uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, instruction_set, app_data_dir);
    HookContext ctx;
    ctx.env = env;
    ctx.args = { &args };
    ctx.nativeForkAndSpecialize_pre();
    reinterpret_cast<decltype(&nativeForkAndSpecialize_l)>(nativeForkAndSpecialize_orig)(
        env, clazz, uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, fds_to_close, instruction_set, app_data_dir
    );
    ctx.nativeForkAndSpecialize_post();
    return ctx.pid;
}
jint nativeForkAndSpecialize_o(JNIEnv *env, jclass clazz, jint uid, jint gid, jintArray gids, jint runtime_flags, jobjectArray rlimits, jint mount_external, jstring se_info, jstring nice_name, jintArray fds_to_close, jintArray fds_to_ignore, jstring instruction_set, jstring app_data_dir) {
    AppSpecializeArgs_v3 args(uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, instruction_set, app_data_dir);
    args.fds_to_ignore = &fds_to_ignore;
    HookContext ctx;
    ctx.env = env;
    ctx.args = { &args };
    ctx.nativeForkAndSpecialize_pre();
    reinterpret_cast<decltype(&nativeForkAndSpecialize_o)>(nativeForkAndSpecialize_orig)(
        env, clazz, uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, fds_to_close, fds_to_ignore, instruction_set, app_data_dir
    );
    ctx.nativeForkAndSpecialize_post();
    return ctx.pid;
}
jint nativeForkAndSpecialize_p(JNIEnv *env, jclass clazz, jint uid, jint gid, jintArray gids, jint runtime_flags, jobjectArray rlimits, jint mount_external, jstring se_info, jstring nice_name, jintArray fds_to_close, jintArray fds_to_ignore, jboolean is_child_zygote, jstring instruction_set, jstring app_data_dir) {
    AppSpecializeArgs_v3 args(uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, instruction_set, app_data_dir);
    args.fds_to_ignore = &fds_to_ignore;
    args.is_child_zygote = &is_child_zygote;
    HookContext ctx;
    ctx.env = env;
    ctx.args = { &args };
    ctx.nativeForkAndSpecialize_pre();
    reinterpret_cast<decltype(&nativeForkAndSpecialize_p)>(nativeForkAndSpecialize_orig)(
        env, clazz, uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, fds_to_close, fds_to_ignore, is_child_zygote, instruction_set, app_data_dir
    );
    ctx.nativeForkAndSpecialize_post();
    return ctx.pid;
}
jint nativeForkAndSpecialize_q_alt(JNIEnv *env, jclass clazz, jint uid, jint gid, jintArray gids, jint runtime_flags, jobjectArray rlimits, jint mount_external, jstring se_info, jstring nice_name, jintArray fds_to_close, jintArray fds_to_ignore, jboolean is_child_zygote, jstring instruction_set, jstring app_data_dir, jboolean is_top_app) {
    AppSpecializeArgs_v3 args(uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, instruction_set, app_data_dir);
    args.fds_to_ignore = &fds_to_ignore;
    args.is_child_zygote = &is_child_zygote;
    args.is_top_app = &is_top_app;
    HookContext ctx;
    ctx.env = env;
    ctx.args = { &args };
    ctx.nativeForkAndSpecialize_pre();
    reinterpret_cast<decltype(&nativeForkAndSpecialize_q_alt)>(nativeForkAndSpecialize_orig)(
        env, clazz, uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, fds_to_close, fds_to_ignore, is_child_zygote, instruction_set, app_data_dir, is_top_app
    );
    ctx.nativeForkAndSpecialize_post();
    return ctx.pid;
}
jint nativeForkAndSpecialize_r(JNIEnv *env, jclass clazz, jint uid, jint gid, jintArray gids, jint runtime_flags, jobjectArray rlimits, jint mount_external, jstring se_info, jstring nice_name, jintArray fds_to_close, jintArray fds_to_ignore, jboolean is_child_zygote, jstring instruction_set, jstring app_data_dir, jboolean is_top_app, jobjectArray pkg_data_info_list, jobjectArray whitelisted_data_info_list, jboolean mount_data_dirs, jboolean mount_storage_dirs) {
    AppSpecializeArgs_v3 args(uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, instruction_set, app_data_dir);
    args.fds_to_ignore = &fds_to_ignore;
    args.is_child_zygote = &is_child_zygote;
    args.is_top_app = &is_top_app;
    args.pkg_data_info_list = &pkg_data_info_list;
    args.whitelisted_data_info_list = &whitelisted_data_info_list;
    args.mount_data_dirs = &mount_data_dirs;
    args.mount_storage_dirs = &mount_storage_dirs;
    HookContext ctx;
    ctx.env = env;
    ctx.args = { &args };
    ctx.nativeForkAndSpecialize_pre();
    reinterpret_cast<decltype(&nativeForkAndSpecialize_r)>(nativeForkAndSpecialize_orig)(
        env, clazz, uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, fds_to_close, fds_to_ignore, is_child_zygote, instruction_set, app_data_dir, is_top_app, pkg_data_info_list, whitelisted_data_info_list, mount_data_dirs, mount_storage_dirs
    );
    ctx.nativeForkAndSpecialize_post();
    return ctx.pid;
}
jint nativeForkAndSpecialize_samsung_m(JNIEnv *env, jclass clazz, jint uid, jint gid, jintArray gids, jint runtime_flags, jobjectArray rlimits, jint mount_external, jstring se_info, jint _0, jint _1, jstring nice_name, jintArray fds_to_close, jstring instruction_set, jstring app_data_dir) {
    AppSpecializeArgs_v3 args(uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, instruction_set, app_data_dir);
    HookContext ctx;
    ctx.env = env;
    ctx.args = { &args };
    ctx.nativeForkAndSpecialize_pre();
    reinterpret_cast<decltype(&nativeForkAndSpecialize_samsung_m)>(nativeForkAndSpecialize_orig)(
        env, clazz, uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, _0, _1, nice_name, fds_to_close, instruction_set, app_data_dir
    );
    ctx.nativeForkAndSpecialize_post();
    return ctx.pid;
}
jint nativeForkAndSpecialize_samsung_n(JNIEnv *env, jclass clazz, jint uid, jint gid, jintArray gids, jint runtime_flags, jobjectArray rlimits, jint mount_external, jstring se_info, jint _2, jint _3, jstring nice_name, jintArray fds_to_close, jstring instruction_set, jstring app_data_dir, jint _4) {
    AppSpecializeArgs_v3 args(uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, instruction_set, app_data_dir);
    HookContext ctx;
    ctx.env = env;
    ctx.args = { &args };
    ctx.nativeForkAndSpecialize_pre();
    reinterpret_cast<decltype(&nativeForkAndSpecialize_samsung_n)>(nativeForkAndSpecialize_orig)(
        env, clazz, uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, _2, _3, nice_name, fds_to_close, instruction_set, app_data_dir, _4
    );
    ctx.nativeForkAndSpecialize_post();
    return ctx.pid;
}
jint nativeForkAndSpecialize_samsung_o(JNIEnv *env, jclass clazz, jint uid, jint gid, jintArray gids, jint runtime_flags, jobjectArray rlimits, jint mount_external, jstring se_info, jint _5, jint _6, jstring nice_name, jintArray fds_to_close, jintArray fds_to_ignore, jstring instruction_set, jstring app_data_dir) {
    AppSpecializeArgs_v3 args(uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, instruction_set, app_data_dir);
    args.fds_to_ignore = &fds_to_ignore;
    HookContext ctx;
    ctx.env = env;
    ctx.args = { &args };
    ctx.nativeForkAndSpecialize_pre();
    reinterpret_cast<decltype(&nativeForkAndSpecialize_samsung_o)>(nativeForkAndSpecialize_orig)(
        env, clazz, uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, _5, _6, nice_name, fds_to_close, fds_to_ignore, instruction_set, app_data_dir
    );
    ctx.nativeForkAndSpecialize_post();
    return ctx.pid;
}
jint nativeForkAndSpecialize_samsung_p(JNIEnv *env, jclass clazz, jint uid, jint gid, jintArray gids, jint runtime_flags, jobjectArray rlimits, jint mount_external, jstring se_info, jint _7, jint _8, jstring nice_name, jintArray fds_to_close, jintArray fds_to_ignore, jboolean is_child_zygote, jstring instruction_set, jstring app_data_dir) {
    AppSpecializeArgs_v3 args(uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, instruction_set, app_data_dir);
    args.fds_to_ignore = &fds_to_ignore;
    args.is_child_zygote = &is_child_zygote;
    HookContext ctx;
    ctx.env = env;
    ctx.args = { &args };
    ctx.nativeForkAndSpecialize_pre();
    reinterpret_cast<decltype(&nativeForkAndSpecialize_samsung_p)>(nativeForkAndSpecialize_orig)(
        env, clazz, uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, _7, _8, nice_name, fds_to_close, fds_to_ignore, is_child_zygote, instruction_set, app_data_dir
    );
    ctx.nativeForkAndSpecialize_post();
    return ctx.pid;
}
const JNINativeMethod nativeForkAndSpecialize_methods[] = {
    {
        "nativeForkAndSpecialize",
        "(II[II[[IILjava/lang/String;Ljava/lang/String;[ILjava/lang/String;Ljava/lang/String;)I",
        (void *) &nativeForkAndSpecialize_l
    },
    {
        "nativeForkAndSpecialize",
        "(II[II[[IILjava/lang/String;Ljava/lang/String;[I[ILjava/lang/String;Ljava/lang/String;)I",
        (void *) &nativeForkAndSpecialize_o
    },
    {
        "nativeForkAndSpecialize",
        "(II[II[[IILjava/lang/String;Ljava/lang/String;[I[IZLjava/lang/String;Ljava/lang/String;)I",
        (void *) &nativeForkAndSpecialize_p
    },
    {
        "nativeForkAndSpecialize",
        "(II[II[[IILjava/lang/String;Ljava/lang/String;[I[IZLjava/lang/String;Ljava/lang/String;Z)I",
        (void *) &nativeForkAndSpecialize_q_alt
    },
    {
        "nativeForkAndSpecialize",
        "(II[II[[IILjava/lang/String;Ljava/lang/String;[I[IZLjava/lang/String;Ljava/lang/String;Z[Ljava/lang/String;[Ljava/lang/String;ZZ)I",
        (void *) &nativeForkAndSpecialize_r
    },
    {
        "nativeForkAndSpecialize",
        "(II[II[[IILjava/lang/String;IILjava/lang/String;[ILjava/lang/String;Ljava/lang/String;)I",
        (void *) &nativeForkAndSpecialize_samsung_m
    },
    {
        "nativeForkAndSpecialize",
        "(II[II[[IILjava/lang/String;IILjava/lang/String;[ILjava/lang/String;Ljava/lang/String;I)I",
        (void *) &nativeForkAndSpecialize_samsung_n
    },
    {
        "nativeForkAndSpecialize",
        "(II[II[[IILjava/lang/String;IILjava/lang/String;[I[ILjava/lang/String;Ljava/lang/String;)I",
        (void *) &nativeForkAndSpecialize_samsung_o
    },
    {
        "nativeForkAndSpecialize",
        "(II[II[[IILjava/lang/String;IILjava/lang/String;[I[IZLjava/lang/String;Ljava/lang/String;)I",
        (void *) &nativeForkAndSpecialize_samsung_p
    },
};
constexpr int nativeForkAndSpecialize_methods_num = std::size(nativeForkAndSpecialize_methods);

void *nativeSpecializeAppProcess_orig = nullptr;
void nativeSpecializeAppProcess_q(JNIEnv *env, jclass clazz, jint uid, jint gid, jintArray gids, jint runtime_flags, jobjectArray rlimits, jint mount_external, jstring se_info, jstring nice_name, jboolean is_child_zygote, jstring instruction_set, jstring app_data_dir) {
    AppSpecializeArgs_v3 args(uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, instruction_set, app_data_dir);
    args.is_child_zygote = &is_child_zygote;
    HookContext ctx;
    ctx.env = env;
    ctx.args = { &args };
    ctx.nativeSpecializeAppProcess_pre();
    reinterpret_cast<decltype(&nativeSpecializeAppProcess_q)>(nativeSpecializeAppProcess_orig)(
        env, clazz, uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, is_child_zygote, instruction_set, app_data_dir
    );
    ctx.nativeSpecializeAppProcess_post();
}
void nativeSpecializeAppProcess_q_alt(JNIEnv *env, jclass clazz, jint uid, jint gid, jintArray gids, jint runtime_flags, jobjectArray rlimits, jint mount_external, jstring se_info, jstring nice_name, jboolean is_child_zygote, jstring instruction_set, jstring app_data_dir, jboolean is_top_app) {
    AppSpecializeArgs_v3 args(uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, instruction_set, app_data_dir);
    args.is_child_zygote = &is_child_zygote;
    args.is_top_app = &is_top_app;
    HookContext ctx;
    ctx.env = env;
    ctx.args = { &args };
    ctx.nativeSpecializeAppProcess_pre();
    reinterpret_cast<decltype(&nativeSpecializeAppProcess_q_alt)>(nativeSpecializeAppProcess_orig)(
        env, clazz, uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, is_child_zygote, instruction_set, app_data_dir, is_top_app
    );
    ctx.nativeSpecializeAppProcess_post();
}
void nativeSpecializeAppProcess_r(JNIEnv *env, jclass clazz, jint uid, jint gid, jintArray gids, jint runtime_flags, jobjectArray rlimits, jint mount_external, jstring se_info, jstring nice_name, jboolean is_child_zygote, jstring instruction_set, jstring app_data_dir, jboolean is_top_app, jobjectArray pkg_data_info_list, jobjectArray whitelisted_data_info_list, jboolean mount_data_dirs, jboolean mount_storage_dirs) {
    AppSpecializeArgs_v3 args(uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, instruction_set, app_data_dir);
    args.is_child_zygote = &is_child_zygote;
    args.is_top_app = &is_top_app;
    args.pkg_data_info_list = &pkg_data_info_list;
    args.whitelisted_data_info_list = &whitelisted_data_info_list;
    args.mount_data_dirs = &mount_data_dirs;
    args.mount_storage_dirs = &mount_storage_dirs;
    HookContext ctx;
    ctx.env = env;
    ctx.args = { &args };
    ctx.nativeSpecializeAppProcess_pre();
    reinterpret_cast<decltype(&nativeSpecializeAppProcess_r)>(nativeSpecializeAppProcess_orig)(
        env, clazz, uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, is_child_zygote, instruction_set, app_data_dir, is_top_app, pkg_data_info_list, whitelisted_data_info_list, mount_data_dirs, mount_storage_dirs
    );
    ctx.nativeSpecializeAppProcess_post();
}
void nativeSpecializeAppProcess_samsung_q(JNIEnv *env, jclass clazz, jint uid, jint gid, jintArray gids, jint runtime_flags, jobjectArray rlimits, jint mount_external, jstring se_info, jint _9, jint _10, jstring nice_name, jboolean is_child_zygote, jstring instruction_set, jstring app_data_dir) {
    AppSpecializeArgs_v3 args(uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, nice_name, instruction_set, app_data_dir);
    args.is_child_zygote = &is_child_zygote;
    HookContext ctx;
    ctx.env = env;
    ctx.args = { &args };
    ctx.nativeSpecializeAppProcess_pre();
    reinterpret_cast<decltype(&nativeSpecializeAppProcess_samsung_q)>(nativeSpecializeAppProcess_orig)(
        env, clazz, uid, gid, gids, runtime_flags, rlimits, mount_external, se_info, _9, _10, nice_name, is_child_zygote, instruction_set, app_data_dir
    );
    ctx.nativeSpecializeAppProcess_post();
}
const JNINativeMethod nativeSpecializeAppProcess_methods[] = {
    {
        "nativeSpecializeAppProcess",
        "(II[II[[IILjava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;)V",
        (void *) &nativeSpecializeAppProcess_q
    },
    {
        "nativeSpecializeAppProcess",
        "(II[II[[IILjava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;Z)V",
        (void *) &nativeSpecializeAppProcess_q_alt
    },
    {
        "nativeSpecializeAppProcess",
        "(II[II[[IILjava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;Z[Ljava/lang/String;[Ljava/lang/String;ZZ)V",
        (void *) &nativeSpecializeAppProcess_r
    },
    {
        "nativeSpecializeAppProcess",
        "(II[II[[IILjava/lang/String;IILjava/lang/String;ZLjava/lang/String;Ljava/lang/String;)V",
        (void *) &nativeSpecializeAppProcess_samsung_q
    },
};
constexpr int nativeSpecializeAppProcess_methods_num = std::size(nativeSpecializeAppProcess_methods);

void *nativeForkSystemServer_orig = nullptr;
jint nativeForkSystemServer_l(JNIEnv *env, jclass clazz, jint uid, jint gid, jintArray gids, jint runtime_flags, jobjectArray rlimits, jlong permitted_capabilities, jlong effective_capabilities) {
    ServerSpecializeArgs_v1 args(uid, gid, gids, runtime_flags, permitted_capabilities, effective_capabilities);
    HookContext ctx;
    ctx.env = env;
    ctx.args = { &args };
    ctx.nativeForkSystemServer_pre();
    reinterpret_cast<decltype(&nativeForkSystemServer_l)>(nativeForkSystemServer_orig)(
        env, clazz, uid, gid, gids, runtime_flags, rlimits, permitted_capabilities, effective_capabilities
    );
    ctx.nativeForkSystemServer_post();
    return ctx.pid;
}
jint nativeForkSystemServer_samsung_q(JNIEnv *env, jclass clazz, jint uid, jint gid, jintArray gids, jint runtime_flags, jint _11, jint _12, jobjectArray rlimits, jlong permitted_capabilities, jlong effective_capabilities) {
    ServerSpecializeArgs_v1 args(uid, gid, gids, runtime_flags, permitted_capabilities, effective_capabilities);
    HookContext ctx;
    ctx.env = env;
    ctx.args = { &args };
    ctx.nativeForkSystemServer_pre();
    reinterpret_cast<decltype(&nativeForkSystemServer_samsung_q)>(nativeForkSystemServer_orig)(
        env, clazz, uid, gid, gids, runtime_flags, _11, _12, rlimits, permitted_capabilities, effective_capabilities
    );
    ctx.nativeForkSystemServer_post();
    return ctx.pid;
}
const JNINativeMethod nativeForkSystemServer_methods[] = {
    {
        "nativeForkSystemServer",
        "(II[II[[IJJ)I",
        (void *) &nativeForkSystemServer_l
    },
    {
        "nativeForkSystemServer",
        "(II[IIII[[IJJ)I",
        (void *) &nativeForkSystemServer_samsung_q
    },
};
constexpr int nativeForkSystemServer_methods_num = std::size(nativeForkSystemServer_methods);

unique_ptr<JNINativeMethod[]> hookAndSaveJNIMethods(const char *className, const JNINativeMethod *methods, int numMethods) {
    unique_ptr<JNINativeMethod[]> newMethods;
    int clz_id = -1;
    int hook_cnt = 0;
    do {
        if (className == "com/android/internal/os/Zygote"sv) {
            clz_id = 0;
            hook_cnt = 3;
            break;
        }
    } while (false);
    if (hook_cnt) {
        newMethods = make_unique<JNINativeMethod[]>(numMethods);
        memcpy(newMethods.get(), methods, sizeof(JNINativeMethod) * numMethods);
    }
    auto &class_map = (*jni_method_map)[className];
    for (int i = 0; i < numMethods; ++i) {
        if (hook_cnt && clz_id == 0) {
            HOOK_JNI(nativeForkAndSpecialize)
            HOOK_JNI(nativeSpecializeAppProcess)
            HOOK_JNI(nativeForkSystemServer)
        }
        class_map[methods[i].name][methods[i].signature] = methods[i].fnPtr;
    }
    return newMethods;
}

} // namespace
