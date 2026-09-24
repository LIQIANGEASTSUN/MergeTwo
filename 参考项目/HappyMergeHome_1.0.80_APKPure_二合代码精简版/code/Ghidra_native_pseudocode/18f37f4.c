
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_019037f4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_01903a0c + 0x1903810);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01903a10 + 0x1903824));
    func_0x01438628(*(undefined4 *)(_UNK_01903a14 + 0x1903830));
    func_0x01438628(*(undefined4 *)(_UNK_01903a18 + 0x190383c));
    func_0x01438628(*(undefined4 *)(_UNK_01903a1c + 0x1903848));
    func_0x01438628(*(undefined4 *)(_UNK_01903a20 + 0x1903854));
    func_0x01438628(*(undefined4 *)(_UNK_01903a24 + 0x1903860));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x969e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x969e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x024f56d0(iVar7,uVar9,&uStack_38,uVar6,0,0);
    uVar5 = func_0x024f56e0(&uStack_38,0,0);
    return uVar5;
  }
  if (*(int *)(**(int **)(_UNK_01903a28 + 0x19038c0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01903a2c + 0x19038dc));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x029b1058(iVar1,param_2,0);
  uVar5 = 1;
  if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
    iVar7 = 0;
    piVar10 = *(int **)(_UNK_01903a30 + 0x190392c);
    puVar11 = *(undefined4 **)(_UNK_01903a34 + 0x1903934);
    puVar12 = *(undefined4 **)(_UNK_01903a38 + 0x190393c);
    do {
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(*puVar11);
      iVar3 = func_0x0152983c(iVar1,iVar7,*puVar12);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar9 = *(undefined4 *)(iVar3 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = func_0x02be153c(iVar2,uVar9,0);
      iVar2 = func_0x014e9518(*puVar11);
      iVar3 = func_0x0152983c(iVar1,iVar7,*puVar12);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar9 = *(undefined4 *)(iVar3 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar4 = func_0x02be1348(iVar2,uVar9,0);
      uVar5 = uVar5 & uVar4;
    } while ((uVar5 == 1) && (iVar7 = iVar7 + 1, iVar7 < *(int *)(iVar1 + 0xc)));
  }
  return uVar5;
}

