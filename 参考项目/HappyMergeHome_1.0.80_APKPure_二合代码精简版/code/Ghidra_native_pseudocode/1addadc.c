
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01aedadc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_01aede28 + 0x1aedaf4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01aede2c + 0x1aedb08));
    func_0x01438628(*(undefined4 *)(_UNK_01aede30 + 0x1aedb14));
    func_0x01438628(*(undefined4 *)(_UNK_01aede34 + 0x1aedb20));
    func_0x01438628(*(undefined4 *)(_UNK_01aede38 + 0x1aedb2c));
    func_0x01438628(*(undefined4 *)(_UNK_01aede3c + 0x1aedb38));
    func_0x01438628(*(undefined4 *)(_UNK_01aede40 + 0x1aedb44));
    func_0x01438628(*(undefined4 *)(_UNK_01aede44 + 0x1aedb50));
    func_0x01438628(*(undefined4 *)(_UNK_01aede48 + 0x1aedb5c));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x02953fd4(0x1bbc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1bbc,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar6,uVar5,&uStack_30,uVar3,0,0);
    uVar5 = func_0x024f56e0(&uStack_30,0,0);
    return uVar5;
  }
  iVar1 = FUN_01ae628c();
  if (((iVar1 != 0) && (iVar1 = FUN_01ae4df4(param_1), iVar1 != 0)) &&
     (iVar1 = func_0x01aede74(param_1), iVar1 != 0)) {
    if (*(int *)(**(int **)(_UNK_01aede4c + 0x1aedbec) + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar10 = *(undefined4 **)(_UNK_01aede50 + 0x1aedc08);
    iVar6 = func_0x014e96a8(*puVar10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar5 = 0;
    iVar6 = func_0x02b76b98(iVar6,0,**(undefined4 **)(_UNK_01aede54 + 0x1aedc34),0);
    if (iVar6 == 0) {
      piVar11 = *(int **)(_UNK_01aede58 + 0x1aedc50);
      if (*(int *)(*piVar11 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar8 = *(undefined4 **)(_UNK_01aede5c + 0x1aedc6c);
      iVar6 = func_0x014e9518(*puVar8);
      piVar7 = *(int **)(_UNK_01aede60 + 0x1aedc80);
      iVar2 = *piVar7;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x014387a4();
        iVar2 = *piVar7;
      }
      uVar5 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x140);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar5 = func_0x02b0fd48(iVar6,uVar5,0);
      piVar9 = *(int **)(_UNK_01aede64 + 0x1aedcc8);
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x024ef144(uVar5,0,0);
      uVar5 = 1;
      if (iVar6 == 0) {
        func_0x01b37d00(iVar1,0);
        if (*(int *)(*piVar11 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(*puVar8);
        iVar6 = *piVar7;
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
          iVar6 = *piVar7;
        }
        puVar8 = *(undefined4 **)(_UNK_01aede68 + 0x1aedd48);
        piVar11 = *(int **)(_UNK_01aede6c + 0x1aedd50);
        uVar3 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x140);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar5 = 0;
        uVar3 = func_0x02b0fd48(iVar1,uVar3,0);
        if (*(int *)(*piVar9 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x024ef144(uVar3,0,0);
        if (iVar1 != 0) {
          if (*(int *)(*piVar11 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x014e96a8(*puVar10);
          if (*(int *)(**(int **)(_UNK_01aede70 + 0x1aeddcc) + 0x74) == 0) {
            func_0x014387a4();
          }
          uStack_38 = func_0x02aed6d8(0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uStack_30 = 0;
          uStack_2c = 0;
          uStack_28 = 0;
          func_0x02b768cc(iVar1,0,*puVar8);
          uVar5 = 1;
        }
      }
    }
  }
  return uVar5;
}

