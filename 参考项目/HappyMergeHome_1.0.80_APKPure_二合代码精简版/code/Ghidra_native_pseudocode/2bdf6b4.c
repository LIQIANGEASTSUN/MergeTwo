
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bef6b4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int unaff_r10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar4 = (char *)(_UNK_02befbdc + 0x2bef6d0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02befbe0 + 0x2bef6e4));
    func_0x01438628(*(undefined4 *)(_UNK_02befbe4 + 0x2bef6f0));
    func_0x01438628(*(undefined4 *)(_UNK_02befbe8 + 0x2bef6fc));
    func_0x01438628(*(undefined4 *)(_UNK_02befbec + 0x2bef708));
    func_0x01438628(*(undefined4 *)(_UNK_02befbf0 + 0x2bef714));
    func_0x01438628(*(undefined4 *)(_UNK_02befbf4 + 0x2bef720));
    func_0x01438628(*(undefined4 *)(_UNK_02befbf8 + 0x2bef72c));
    func_0x01438628(*(undefined4 *)(_UNK_02befbfc + 0x2bef738));
    func_0x01438628(*(undefined4 *)(_UNK_02befc00 + 0x2bef744));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0xec4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xec4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0286c1e8(iVar1,param_1,param_2,0);
    return;
  }
  piVar5 = *(int **)(_UNK_02befc04 + 0x2bef7ac);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x024eec50(param_1,0,0);
  if (iVar1 != 0) {
    return;
  }
  uVar2 = func_0x014e94d8(param_1,0);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x024eec50(uVar2,0,0);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = func_0x014e94d8(param_1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x024ef984(iVar1,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x50);
  if (param_2 != 0) {
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)(iVar1 + 0xc) < 2) {
      return;
    }
    uVar2 = 0x3f800000;
    goto LAB_02bef8c0;
  }
  if ((iVar1 != 0) && (1 < *(int *)(iVar1 + 0xc))) {
    func_0x0152da0c(&uStack_48,iVar1,**(undefined4 **)(_UNK_02befc08 + 0x2bef8dc));
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    iStack_2c = iStack_3c;
    puVar7 = *(undefined4 **)(_UNK_02befc0c + 0x2bef8f8);
    do {
      iVar3 = func_0x04878f14(&uStack_38,*puVar7);
      iVar1 = iStack_2c;
      if (iVar3 == 0) {
        func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02befc18 + 0x2bef948));
        iVar3 = func_0x02c009b8(param_1,0,1,1,0xffffffff);
        iVar1 = 0;
        if (iVar3 != 0) {
          iVar1 = *(int *)(iVar3 + 0xc);
          unaff_r10 = iVar3;
        }
        if (iVar3 == 0 || iVar1 == 0) {
          return;
        }
        puVar6 = *(undefined4 **)(_UNK_02befc1c + 0x2bef994);
        iVar1 = func_0x0152983c(unaff_r10,0,*puVar6);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02c3f4b4(iVar1,0);
        iVar3 = *(int *)(param_1 + 0x50);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x0152983c(iVar3,0,*puVar6);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02c3f4b4(iVar3,0);
        if (iVar1 == iVar3) {
          return;
        }
        func_0x0152da0c(&uStack_48,unaff_r10,**(undefined4 **)(_UNK_02befc20 + 0x2befa0c));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        iStack_2c = iStack_3c;
        goto LAB_02befa1c;
      }
      if (iStack_2c == 0) {
        func_0x014388e4();
      }
    } while (*(int *)(iVar1 + 0x14) != 0);
LAB_02bef924:
    func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02befc10 + 0x2bef930));
    return;
  }
  FUN_02bee744(param_1,0xffffffff,1);
  func_0x02c009b8(param_1,1,1,1,0xffffffff);
  goto LAB_02bef8b0;
  while( true ) {
    if (iStack_2c == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0x14) == 0) break;
LAB_02befa1c:
    iVar3 = func_0x04878f14(&uStack_38,*puVar7);
    iVar1 = iStack_2c;
    if (iVar3 == 0) goto LAB_02bef924;
  }
  func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02befc30 + 0x2befa58));
  FUN_02bee744(param_1,0xffffffff,1);
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar3) {
    func_0x01523bec(*(undefined4 *)(iVar1 + 8),0,iVar3,0);
  }
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x024f0ea8(iVar1,unaff_r10,**(undefined4 **)(_UNK_02befc34 + 0x2befad0));
LAB_02bef8b0:
  uVar2 = 0x40200000;
LAB_02bef8c0:
  func_0x02bf1628(param_1,0xffffffff,uVar2);
  return;
}

