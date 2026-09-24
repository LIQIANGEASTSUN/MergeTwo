
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ebdef8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar7 = (char *)(_UNK_02ebe318 + 0x2ebdf18);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02ebe31c + 0x2ebdf30));
    func_0x01438628(*(undefined4 *)(_UNK_02ebe320 + 0x2ebdf3c));
    func_0x01438628(*(undefined4 *)(_UNK_02ebe324 + 0x2ebdf48));
    func_0x01438628(*(undefined4 *)(_UNK_02ebe328 + 0x2ebdf54));
    func_0x01438628(*(undefined4 *)(_UNK_02ebe32c + 0x2ebdf60));
    func_0x01438628(*(undefined4 *)(_UNK_02ebe330 + 0x2ebdf6c));
    *pcVar7 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x02953fd4(0x5e24,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02eb45d4(param_1);
    if (((iVar1 != 0) && (iVar1 = FUN_02eb46d0(param_1), iVar1 != 0)) &&
       (iVar1 = FUN_02eb6c88(param_1), iVar1 == 0)) {
      fVar2 = (float)func_0x024f1544(0x3f800000,param_5);
      iVar1 = (int)fVar2;
      if (fVar2 == _UNK_02ebe314) {
        iVar1 = -0x80000000;
      }
      iVar3 = func_0x02ebe34c(param_1);
      iVar4 = FUN_02ebc9c0(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      FUN_026c2c78(iVar4,*(int *)(iVar4 + 0x38) + iVar1,0);
      if (*(int *)(**(int **)(_UNK_02ebe334 + 0x2ebe078) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02ebe338 + 0x2ebe094));
      piVar6 = *(int **)(_UNK_02ebe33c + 0x2ebe0a8);
      iVar4 = *piVar6;
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x014387a4();
        iVar4 = *piVar6;
      }
      iVar8 = **(int **)(_UNK_02ebe340 + 0x2ebe0c8);
      iVar5 = *(int *)(iVar8 + 0x1c);
      uVar10 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x1a0);
      if (iVar5 == 0) {
        func_0x014909d8(iVar8);
        iVar5 = *(int *)(iVar8 + 0x1c);
      }
      iVar4 = *(int *)(iVar5 + 8);
      if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = func_0x0149097c();
      }
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
      if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = func_0x0149097c();
      }
      uVar9 = **(undefined4 **)(iVar4 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x029901b4(iVar1,uVar10,uVar9,0);
      iVar1 = FUN_02ebc9c0(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x38);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0xc) <= iVar1) {
        iVar1 = FUN_02ebc9c0(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        FUN_026c2c78(iVar1,*(int *)(iVar1 + 0x38) - *(int *)(iVar3 + 0xc),0);
        iVar1 = **(int **)(**(int **)(_UNK_02ebe344 + 0x2ebe1c4) + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar10 = 0;
        FUN_02e64460(iVar1,0x2be,1);
        iVar1 = FUN_02ebc9c0(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iStack_28 = *(int *)(iVar1 + 0x34);
        FUN_026c2bbc(iVar1,iStack_28 + 1,0);
        if (param_4 == 0) {
          func_0x014388e4();
        }
        func_0x02bebb14(&uStack_34,param_4,param_2,0);
        func_0x02ebe468(param_1,1,uStack_34,uStack_30,uStack_2c);
        if (*(int *)(**(int **)(_UNK_02ebe348 + 0x2ebe294) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x0202346c(0);
        iStack_28 = *(int *)(iVar3 + 8);
        uVar9 = func_0x01524ffc(&iStack_28,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar1,0x1f6,uVar9,0,0,0,0,uVar10,0,0,0,0,0);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5e24,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bd544(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}

