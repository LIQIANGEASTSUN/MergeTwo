
/* WARNING: Possible PIC construction at 0x02c24f60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c24f64) */
/* WARNING: Removing unreachable block (ram,0x02c24f80) */
/* WARNING: Removing unreachable block (ram,0x02c24f84) */
/* WARNING: Removing unreachable block (ram,0x02c24fa8) */
/* WARNING: Removing unreachable block (ram,0x02c24fac) */
/* WARNING: Removing unreachable block (ram,0x02c24fcc) */
/* WARNING: Removing unreachable block (ram,0x02c24fd0) */
/* WARNING: Removing unreachable block (ram,0x02c25000) */
/* WARNING: Removing unreachable block (ram,0x02c25004) */
/* WARNING: Removing unreachable block (ram,0x02c25028) */
/* WARNING: Removing unreachable block (ram,0x02c2502c) */
/* WARNING: Removing unreachable block (ram,0x02c25044) */
/* WARNING: Removing unreachable block (ram,0x02c25050) */
/* WARNING: Removing unreachable block (ram,0x02c25054) */
/* WARNING: Removing unreachable block (ram,0x02c2505c) */
/* WARNING: Removing unreachable block (ram,0x02c25060) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c24dd4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_02c25074 + 0x2c24de8);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c25078 + 0x2c24dfc));
    func_0x01438628(*(undefined4 *)(_UNK_02c2507c + 0x2c24e08));
    func_0x01438628(*(undefined4 *)(_UNK_02c25080 + 0x2c24e14));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xd72,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xd72,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar3,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  if ((*(int *)(param_1 + 0x1c) != 0) && (*(int *)(*(int *)(param_1 + 0x1c) + 0x1c) - 99U < 2)) {
    uVar5 = *(undefined4 *)(param_1 + 0xf0);
    if (*(int *)(**(int **)(_UNK_02c25084 + 0x2c24e88) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x024eec50(uVar5,0,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x11c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0xc) == 1) {
        iVar1 = *(int *)(param_1 + 0xf0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x014e94d8(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar5 = 0;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x11c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar1 + 0xc) != 3) {
          return;
        }
        iVar1 = *(int *)(param_1 + 0xf0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x014e94d8(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar5 = 1;
      }
      (*(code *)&UNK_05d3ec04)(iVar1,uVar5,0);
      return;
    }
  }
  return;
}

