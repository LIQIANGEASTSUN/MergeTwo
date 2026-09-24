
/* WARNING: Removing unreachable block (ram,0x02bef84c) */
/* WARNING: Removing unreachable block (ram,0x02bef854) */
/* WARNING: Removing unreachable block (ram,0x02bef860) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02babb4c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int unaff_r10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_02babc44 + 0x2babb64);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02babc48 + 0x2babb78));
    func_0x01438628(*(undefined4 *)(_UNK_02babc4c + 0x2babb84));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5cb8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5cb8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar3,uVar6,&uStack_38,uVar2,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(param_2 + 0x50);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  else if (*(int *)(iVar1 + 0xc) != 0) {
    return;
  }
  iVar3 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar3) {
    func_0x01523bec(*(undefined4 *)(iVar1 + 8),0,iVar3,0);
  }
  pcVar7 = (char *)(_UNK_02befbdc + 0x2bef6d0);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02befbe0 + 0x2bef6e4),0,0);
    func_0x01438628(*(undefined4 *)(_UNK_02befbe4 + 0x2bef6f0));
    func_0x01438628(*(undefined4 *)(_UNK_02befbe8 + 0x2bef6fc));
    func_0x01438628(*(undefined4 *)(_UNK_02befbec + 0x2bef708));
    func_0x01438628(*(undefined4 *)(_UNK_02befbf0 + 0x2bef714));
    func_0x01438628(*(undefined4 *)(_UNK_02befbf4 + 0x2bef720));
    func_0x01438628(*(undefined4 *)(_UNK_02befbf8 + 0x2bef72c));
    func_0x01438628(*(undefined4 *)(_UNK_02befbfc + 0x2bef738));
    func_0x01438628(*(undefined4 *)(_UNK_02befc00 + 0x2bef744));
    *pcVar7 = '\x01';
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
    func_0x0286c1e8(iVar1,param_2,0,0);
    return;
  }
  piVar4 = *(int **)(_UNK_02befc04 + 0x2bef7ac);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x024eec50(param_2,0,0);
  if (iVar1 != 0) {
    return;
  }
  uVar6 = func_0x014e94d8(param_2,0);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x024eec50(uVar6,0,0);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = func_0x014e94d8(param_2,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x024ef984(iVar1,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_2 + 0x50);
  if ((iVar1 != 0) && (1 < *(int *)(iVar1 + 0xc))) {
    func_0x0152da0c(&uStack_48,iVar1,**(undefined4 **)(_UNK_02befc08 + 0x2bef8dc));
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    iStack_2c = iStack_3c;
    puVar8 = *(undefined4 **)(_UNK_02befc0c + 0x2bef8f8);
    do {
      iVar3 = func_0x04878f14(&uStack_38,*puVar8);
      iVar1 = iStack_2c;
      if (iVar3 == 0) {
        func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02befc18 + 0x2bef948));
        uStack_50 = 0xffffffff;
        iVar3 = func_0x02c009b8(param_2,0,1,1);
        iVar1 = 0;
        if (iVar3 != 0) {
          iVar1 = *(int *)(iVar3 + 0xc);
          unaff_r10 = iVar3;
        }
        if (iVar3 == 0 || iVar1 == 0) {
          return;
        }
        puVar5 = *(undefined4 **)(_UNK_02befc1c + 0x2bef994);
        iVar1 = func_0x0152983c(unaff_r10,0,*puVar5);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02c3f4b4(iVar1,0);
        iVar3 = *(int *)(param_2 + 0x50);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x0152983c(iVar3,0,*puVar5);
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
  func_0x02bee744(param_2,0xffffffff,1);
  uStack_50 = 0xffffffff;
  func_0x02c009b8(param_2,1,1,1);
LAB_02bef8b0:
  func_0x02bf1628(param_2,0xffffffff,0x40200000);
  return;
  while( true ) {
    if (iStack_2c == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0x14) == 0) break;
LAB_02befa1c:
    iVar3 = func_0x04878f14(&uStack_38,*puVar8);
    iVar1 = iStack_2c;
    if (iVar3 == 0) goto LAB_02bef924;
  }
  func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02befc30 + 0x2befa58));
  func_0x02bee744(param_2,0xffffffff,1);
  iVar1 = *(int *)(param_2 + 0x50);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar3) {
    func_0x01523bec(*(undefined4 *)(iVar1 + 8),0,iVar3,0);
  }
  iVar1 = *(int *)(param_2 + 0x50);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x024f0ea8(iVar1,unaff_r10,**(undefined4 **)(_UNK_02befc34 + 0x2befad0));
  goto LAB_02bef8b0;
}

