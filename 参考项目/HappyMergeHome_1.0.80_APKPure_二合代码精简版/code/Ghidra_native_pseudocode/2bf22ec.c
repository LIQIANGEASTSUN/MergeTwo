
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c022ec(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_02c02680 + 0x2c02304);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c02684 + 0x2c02318));
    func_0x01438628(*(undefined4 *)(_UNK_02c02688 + 0x2c02324));
    func_0x01438628(*(undefined4 *)(_UNK_02c0268c + 0x2c02330));
    func_0x01438628(*(undefined4 *)(_UNK_02c02690 + 0x2c0233c));
    func_0x01438628(*(undefined4 *)(_UNK_02c02694 + 0x2c02348));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xe9c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xe9c,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 != 0) {
    iVar5 = 0;
    puVar9 = *(undefined4 **)(_UNK_02c02698 + 0x2c023b4);
    piVar8 = *(int **)(_UNK_02c0269c + 0x2c023bc);
    while( true ) {
      if (iVar1 == 0) {
        func_0x014388e4();
        iVar2 = iRam0000000c;
        iVar1 = *(int *)(param_1 + 0x50);
        if (iVar1 == 0) {
          func_0x014388e4();
          iVar1 = 0;
        }
      }
      else {
        iVar2 = *(int *)(iVar1 + 0xc);
      }
      if (iVar2 <= iVar5) break;
      iVar1 = func_0x0152983c(iVar1,iVar5,*puVar9);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = *(undefined4 *)(iVar1 + 0xc);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x024eec50(uVar6,0,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x50);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x0152983c(iVar1,iVar5,*puVar9);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0xc);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x02c23a10(iVar1,0);
        iVar1 = *(int *)(param_1 + 0x50);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x0152983c(iVar1,iVar5,*puVar9);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0xc);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x024eecb8(iVar1,0);
        if (*(char *)(_UNK_02c026a0 + 0x2c024ec) == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_02c026a4 + 0x2c02500));
          *(undefined1 *)(_UNK_02c026a8 + 0x2c02510) = 1;
        }
        iVar2 = *(int *)(**(int **)(_UNK_02c026ac + 0x2c02520) + 0x5c);
        uVar3 = *(undefined4 *)(iVar2 + 0xc);
        uVar6 = *(undefined4 *)(iVar2 + 0x10);
        uVar7 = *(undefined4 *)(iVar2 + 0x14);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uStack_28 = 0;
        func_0x024ef328(iVar1,uVar3,uVar6,uVar7);
        iVar1 = *(int *)(param_1 + 0x50);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x0152983c(iVar1,iVar5,*puVar9);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0xc);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02c19590(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x014e94f8(iVar1,1,0);
        iVar1 = *(int *)(param_1 + 0x50);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x0152983c(iVar1,iVar5,*puVar9);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0xc);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02c19590(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x024f1048(iVar1,**(undefined4 **)(_UNK_02c026b0 + 0x2c0262c),0);
      }
      iVar1 = *(int *)(param_1 + 0x50);
      iVar5 = iVar5 + 1;
    }
    iVar5 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar5) {
      (*(code *)&SUB_051894b8)(*(undefined4 *)(iVar1 + 8),0,iVar5,0);
      return;
    }
  }
  return;
}

