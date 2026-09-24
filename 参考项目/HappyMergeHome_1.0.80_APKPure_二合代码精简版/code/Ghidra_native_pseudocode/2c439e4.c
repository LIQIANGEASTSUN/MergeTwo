
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c539e4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar3 = (char *)(_UNK_02c53c0c + 0x2c539fc);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c53c10 + 0x2c53a10));
    func_0x01438628(*(undefined4 *)(_UNK_02c53c14 + 0x2c53a1c));
    func_0x01438628(*(undefined4 *)(_UNK_02c53c18 + 0x2c53a28));
    func_0x01438628(*(undefined4 *)(_UNK_02c53c1c + 0x2c53a34));
    func_0x01438628(*(undefined4 *)(_UNK_02c53c20 + 0x2c53a40));
    func_0x01438628(*(undefined4 *)(_UNK_02c53c24 + 0x2c53a4c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5f6d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5f6d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = func_0x014e94d8(param_1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar4 = 0;
  iVar1 = func_0x024efc2c(iVar1,0);
  if (iVar1 != 0) {
    iVar5 = *(int *)(param_1 + 0x104);
    iVar1 = iVar5 + 0x10;
    puVar8 = *(undefined4 **)(_UNK_02c53c28 + 0x2c53ae4);
    piVar9 = *(int **)(_UNK_02c53c2c + 0x2c53aec);
    iStack_28 = iVar1;
    while( true ) {
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      if ((int)*(uint *)(iVar5 + 0xc) <= (int)uVar4) break;
      if (*(uint *)(iVar5 + 0xc) <= uVar4) {
        func_0x014388e8();
      }
      uVar6 = *(undefined4 *)(iVar1 + uVar4 * 4);
      iVar7 = *(int *)(param_1 + 0x108);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = func_0x04753c80(iVar7,uVar6,*puVar8);
      if (iVar7 == 0) {
        if (*(int *)(*piVar9 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_02c53c30 + 0x2c53b5c));
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x03579aec(iVar7,uVar6,**(undefined4 **)(_UNK_02c53c34 + 0x2c53b80));
        if (*(int *)(**(int **)(_UNK_02c53c38 + 0x2c53b98) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar7 = func_0x024eec50(uVar2,0,0);
        if (iVar7 == 0) {
          iVar1 = *(int *)(param_1 + 0x108);
          if (iVar1 == 0) {
            func_0x014388e4(param_1);
          }
          func_0x04755694(iVar1,uVar6,uVar2,**(undefined4 **)(_UNK_02c53c3c + 0x2c53bec));
          iVar1 = iStack_28;
        }
      }
      uVar4 = uVar4 + 1;
    }
  }
  return;
}

