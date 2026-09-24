
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02ba46f8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_02ba4990 + 0x2ba4710);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02ba4994 + 0x2ba4724));
    func_0x01438628(*(undefined4 *)(_UNK_02ba4998 + 0x2ba4730));
    func_0x01438628(*(undefined4 *)(_UNK_02ba499c + 0x2ba473c));
    func_0x01438628(*(undefined4 *)(_UNK_02ba49a0 + 0x2ba4748));
    func_0x01438628(*(undefined4 *)(_UNK_02ba49a4 + 0x2ba4754));
    func_0x01438628(*(undefined4 *)(_UNK_02ba49a8 + 0x2ba4760));
    func_0x01438628(*(undefined4 *)(_UNK_02ba49ac + 0x2ba476c));
    func_0x01438628(*(undefined4 *)(_UNK_02ba49b0 + 0x2ba4778));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xfdd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xfdd,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
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
    uVar5 = func_0x024f56e0(&uStack_30,0,0);
    return uVar5;
  }
  piVar6 = *(int **)(_UNK_02ba49b4 + 0x2ba47d4);
  iVar1 = **(int **)(*piVar6 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02b63a9c(iVar1,0x14,0,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02ba49b8 + 0x2ba4814) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02ba49bc + 0x2ba4830));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02d0fe1c(iVar1,0);
    puVar7 = *(undefined4 **)(_UNK_02ba49c8 + 0x2ba4870);
    if (1 < iVar1) {
      puVar7 = *(undefined4 **)(_UNK_02ba49c4 + 0x2ba4868);
    }
    uVar5 = func_0x014e9568(**(undefined4 **)(_UNK_02ba49c0 + 0x2ba4860),*puVar7,0);
    piVar8 = *(int **)(_UNK_02ba49cc + 0x2ba4894);
    uVar2 = **(undefined4 **)(*piVar8 + 0x5c);
    if (*(int *)(**(int **)(_UNK_02ba49d0 + 0x2ba48a0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x024ef144(uVar2,0,0);
    if (iVar1 != 0) {
      iVar1 = **(int **)(*piVar8 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x014e94d8(iVar1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x024ef984(iVar1,0);
      if (iVar1 != 0) {
        iVar1 = **(int **)(*piVar6 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uStack_20 = 0;
        func_0x02b6127c(iVar1,0x14,uVar5,0);
        return 1;
      }
    }
    iVar1 = **(int **)(*piVar6 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02b63a9c(iVar1,0x14,0,0);
  }
  return 0;
}

