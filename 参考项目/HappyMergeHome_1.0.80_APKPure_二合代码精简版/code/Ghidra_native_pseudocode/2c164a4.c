
/* WARNING: Possible PIC construction at 0x02c26700: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c26704) */
/* WARNING: Removing unreachable block (ram,0x02c26750) */
/* WARNING: Removing unreachable block (ram,0x02c26754) */
/* WARNING: Removing unreachable block (ram,0x024ef208) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c264a4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_02c267f4 + 0x2c264bc);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c267f8 + 0x2c264d0));
    func_0x01438628(*(undefined4 *)(_UNK_02c267fc + 0x2c264dc));
    func_0x01438628(*(undefined4 *)(_UNK_02c26800 + 0x2c264e8));
    func_0x01438628(*(undefined4 *)(_UNK_02c26804 + 0x2c264f4));
    func_0x01438628(*(undefined4 *)(_UNK_02c26808 + 0x2c26500));
    func_0x01438628(*(undefined4 *)(_UNK_02c2680c + 0x2c2650c));
    func_0x01438628(*(undefined4 *)(_UNK_02c26810 + 0x2c26518));
    func_0x01438628(*(undefined4 *)(_UNK_02c26814 + 0x2c26524));
    func_0x01438628(*(undefined4 *)(_UNK_02c26818 + 0x2c26530));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5ef6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5ef6,0);
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
  piVar6 = *(int **)(_UNK_02c2681c + 0x2c2658c);
  iVar1 = *(int *)(param_1 + 0x11c);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar7 = *(undefined4 **)(_UNK_02c26820 + 0x2c265ac);
  iVar3 = func_0x014e9518(*puVar7);
  uVar5 = FUN_02c19900(param_1);
  uVar2 = FUN_02c0c0ac(param_1);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = FUN_02bad204(iVar3,uVar5,uVar2,0);
  if (iVar1 == iVar3) {
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(*puVar7);
    uVar5 = FUN_02c19900(param_1);
    uVar2 = FUN_02c0c0ac(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_02bad204(iVar1,uVar5,uVar2,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0xc) == 2) {
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(*puVar7);
      uVar5 = FUN_02c19900(param_1);
      uVar2 = FUN_02c0c0ac(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_02bada20(iVar1,uVar5,uVar2,0);
      if (0 < iVar1) {
        return;
      }
      FUN_02c23358(param_1,*(undefined4 *)(param_1 + 200),
                   **(undefined4 **)(_UNK_02c26828 + 0x2c266dc));
      uVar5 = **(undefined4 **)(_UNK_02c2682c + 0x2c266fc);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x34);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x014e94d8(iVar1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x014e94e8(iVar1,0,0);
      uVar5 = **(undefined4 **)(_UNK_02c26824 + 0x2c267e4);
    }
    (*(code *)&UNK_05d3fb3c)(param_1,uVar5,0);
    return;
  }
  return;
}

