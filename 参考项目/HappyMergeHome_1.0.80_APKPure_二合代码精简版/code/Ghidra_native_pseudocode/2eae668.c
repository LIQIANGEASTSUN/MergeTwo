
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ebe668(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uStack_1c;
  
  pcVar6 = (char *)(_UNK_02ebea18 + 0x2ebe684);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02ebea1c + 0x2ebe698));
    func_0x01438628(*(undefined4 *)(_UNK_02ebea20 + 0x2ebe6a4));
    func_0x01438628(*(undefined4 *)(_UNK_02ebea24 + 0x2ebe6b0));
    func_0x01438628(*(undefined4 *)(_UNK_02ebea28 + 0x2ebe6bc));
    func_0x01438628(*(undefined4 *)(_UNK_02ebea2c + 0x2ebe6c8));
    func_0x01438628(*(undefined4 *)(_UNK_02ebea30 + 0x2ebe6d4));
    *pcVar6 = '\x01';
  }
  uStack_1c = 0;
  iVar1 = func_0x02953fd4(0x479,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02ebe34c(param_1);
    iVar2 = FUN_02ebc9c0(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    FUN_026c2c78(iVar2,*(int *)(iVar2 + 0x38) + param_2,0);
    if (*(int *)(**(int **)(_UNK_02ebea34 + 0x2ebe770) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02ebea38 + 0x2ebe78c));
    piVar7 = *(int **)(_UNK_02ebea3c + 0x2ebe7a0);
    iVar3 = *piVar7;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar7;
    }
    iVar8 = **(int **)(_UNK_02ebea40 + 0x2ebe7c0);
    iVar4 = *(int *)(iVar8 + 0x1c);
    uVar10 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x1a0);
    if (iVar4 == 0) {
      func_0x014909d8(iVar8);
      iVar4 = *(int *)(iVar8 + 0x1c);
    }
    iVar3 = *(int *)(iVar4 + 8);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = func_0x0149097c();
    }
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = func_0x0149097c();
    }
    uVar9 = **(undefined4 **)(iVar3 + 0x5c);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x029901b4(iVar2,uVar10,uVar9,0);
    iVar2 = FUN_02ebc9c0(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x38);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0xc) <= iVar2) {
      iVar2 = FUN_02ebc9c0(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      FUN_026c2c78(iVar2,*(int *)(iVar2 + 0x38) - *(int *)(iVar1 + 0xc),0);
      iVar2 = **(int **)(**(int **)(_UNK_02ebea44 + 0x2ebe8b8) + 0x5c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar10 = 0;
      FUN_02e64460(iVar2,0x2be,1);
      iVar2 = FUN_02ebc9c0(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      FUN_026c2bbc(iVar2,*(int *)(iVar2 + 0x34) + 1,0);
      pcVar6 = (char *)(_UNK_02ebea48 + 0x2ebe94c);
      if (*pcVar6 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02ebea4c + 0x2ebe960));
        *pcVar6 = '\x01';
      }
      puVar5 = *(undefined4 **)(**(int **)(_UNK_02ebea50 + 0x2ebe978) + 0x5c);
      FUN_02ebe468(param_1,1,*puVar5,puVar5[1],0);
      if (*(int *)(**(int **)(_UNK_02ebea54 + 0x2ebe998) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x0202346c(0);
      uStack_1c = *(undefined4 *)(iVar1 + 8);
      uVar9 = func_0x01524ffc(&uStack_1c,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x020257a4(iVar2,0x1f6,uVar9,0,0,0,0,uVar10,0,0,0,0,0);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x479,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0286c2b8(iVar1,param_1,param_2,0);
  }
  return;
}

