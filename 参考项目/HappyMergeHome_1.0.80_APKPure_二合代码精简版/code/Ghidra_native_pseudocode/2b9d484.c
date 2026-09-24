
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02bad484(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
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
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar9 = (char *)(_UNK_02bad57c + 0x2bad49c);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bad580 + 0x2bad4b0));
    func_0x01438628(*(undefined4 *)(_UNK_02bad584 + 0x2bad4bc));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x5cc2,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x5cc2,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_38,uVar4,0,0);
    uVar1 = func_0x024f56f0(&uStack_38,0,0);
    return uVar1;
  }
  if (*(int *)(**(int **)(_UNK_02bad588 + 0x2bad518) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bad58c + 0x2bad534));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar5 = func_0x029a6fa8(iVar2,param_2,0);
  iVar2 = 0;
  if (iVar5 != 0) {
    iVar2 = *(int *)(iVar5 + 0xc4);
  }
  if (iVar5 != 0 && iVar2 != 0) {
    pcVar9 = (char *)(_UNK_02b53c00 + 0x2b53a54);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02b53c04 + 0x2b53a68),0);
      func_0x01438628(*(undefined4 *)(_UNK_02b53c08 + 0x2b53a74));
      func_0x01438628(*(undefined4 *)(_UNK_02b53c0c + 0x2b53a80));
      *pcVar9 = '\x01';
    }
    uVar1 = 0;
    uStack_1c = 0;
    uStack_20 = 0;
    iVar5 = func_0x02953fd4(0x5b7b,0);
    if (iVar5 == 0) {
      iVar5 = 0;
      while( true ) {
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        if ((int)*(uint *)(iVar2 + 0xc) <= (int)uVar1) break;
        if (*(uint *)(iVar2 + 0xc) <= uVar1) {
          func_0x014388e8();
        }
        iVar8 = uVar1 * 4;
        uVar1 = uVar1 + 1;
        iVar5 = *(int *)(iVar2 + 0x10 + iVar8) + iVar5;
      }
      if (*(int *)(**(int **)(_UNK_02b53c10 + 0x2b53b24) + 0x74) == 0) {
        func_0x014387a4();
      }
      func_0x024efa94(&uStack_28,0);
      uStack_20 = uStack_28;
      uStack_1c = uStack_24;
      uVar7 = func_0x0152482c(&uStack_20,0);
      func_0x024f5f30(uVar7,0);
      iVar5 = func_0x024f14b8(0,iVar5,0);
      uVar1 = *(uint *)(iVar2 + 0xc);
      if (0 < (int)uVar1) {
        uVar6 = 0;
        iVar8 = 0;
        do {
          if (uVar1 <= uVar6) {
            func_0x014388e8();
          }
          iVar3 = *(int *)(iVar2 + 0x10 + uVar6 * 4) + iVar8;
          if ((iVar8 <= iVar5) && (iVar5 <= iVar3)) {
            return uVar6;
          }
          uVar1 = *(uint *)(iVar2 + 0xc);
          uVar6 = uVar6 + 1;
          iVar8 = iVar3;
        } while ((int)uVar6 < (int)uVar1);
      }
      if (*(int *)(**(int **)(_UNK_02b53c14 + 0x2b53bcc) + 0x74) == 0) {
        func_0x014387a4();
      }
      func_0x024ef174(**(undefined4 **)(_UNK_02b53c18 + 0x2b53bec),0);
      uVar1 = 0xffffffff;
    }
    else {
      iVar5 = func_0x029540a4(0x5b7b,0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uVar1 = func_0x02869564(iVar5,iVar2,0);
    }
    return uVar1;
  }
  return 0;
}

