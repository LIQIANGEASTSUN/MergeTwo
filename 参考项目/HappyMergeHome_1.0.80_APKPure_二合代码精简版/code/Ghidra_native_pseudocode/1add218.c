
/* WARNING: Possible PIC construction at 0x01aed3d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01aed3d8) */
/* WARNING: Removing unreachable block (ram,0x01aed3ec) */
/* WARNING: Removing unreachable block (ram,0x01aed400) */
/* WARNING: Removing unreachable block (ram,0x01aed404) */
/* WARNING: Removing unreachable block (ram,0x01aed424) */
/* WARNING: Removing unreachable block (ram,0x01aed428) */
/* WARNING: Removing unreachable block (ram,0x01aed458) */
/* WARNING: Removing unreachable block (ram,0x01aed464) */
/* WARNING: Removing unreachable block (ram,0x01aed474) */
/* WARNING: Removing unreachable block (ram,0x01aed478) */
/* WARNING: Removing unreachable block (ram,0x01aed484) */
/* WARNING: Removing unreachable block (ram,0x01aed488) */
/* WARNING: Removing unreachable block (ram,0x01aed49c) */
/* WARNING: Removing unreachable block (ram,0x01aed4a0) */
/* WARNING: Removing unreachable block (ram,0x01aed4b0) */
/* WARNING: Removing unreachable block (ram,0x01aed4b4) */
/* WARNING: Removing unreachable block (ram,0x01aed4dc) */
/* WARNING: Removing unreachable block (ram,0x01aed4e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01aed218(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_01aed4f4 + 0x1aed22c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01aed4f8 + 0x1aed240));
    func_0x01438628(*(undefined4 *)(_UNK_01aed4fc + 0x1aed24c));
    func_0x01438628(*(undefined4 *)(_UNK_01aed500 + 0x1aed258));
    func_0x01438628(*(undefined4 *)(_UNK_01aed504 + 0x1aed264));
    func_0x01438628(*(undefined4 *)(_UNK_01aed508 + 0x1aed270));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1bb0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1bb0,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x024f56e0(&uStack_30,0,0);
    return uVar5;
  }
  iVar1 = FUN_01ae628c();
  if ((iVar1 != 0) && (iVar1 = FUN_01ae4df4(param_1), iVar1 != 0)) {
    iVar1 = **(int **)(**(int **)(_UNK_01aed50c + 0x1aed2e8) + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02b67784(iVar1,0);
    if ((iVar1 == 0) && (iVar1 = FUN_01ae99ac(param_1), iVar1 != 0)) {
      iVar1 = FUN_01ae99ac(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0x1c) != 1) {
        func_0x01aed520(param_1);
        if (*(int *)(**(int **)(_UNK_01aed510 + 0x1aed35c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01aed514 + 0x1aed378));
        uVar5 = FUN_01aebc68(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar5 = func_0x02b0fd48(iVar1,uVar5,0);
        if (*(int *)(**(int **)(_UNK_01aed518 + 0x1aed3b8) + 0x74) == 0) {
          func_0x014387a4();
        }
        uVar5 = (*(code *)&UNK_05d3e9a4)(uVar5,0,0);
        return uVar5;
      }
    }
  }
  return 0;
}

