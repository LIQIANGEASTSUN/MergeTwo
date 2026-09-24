
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02b49e9c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar7 = (char *)(iRam02b4a214 + 0x2b49ebc);
  iStack_28 = param_2;
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b4a218 + 0x2b49ed0));
    func_0x01438628(*(undefined4 *)(_UNK_02b4a21c + 0x2b49edc));
    func_0x01438628(*(undefined4 *)(_UNK_02b4a220 + 0x2b49ee8));
    func_0x01438628(*(undefined4 *)(_UNK_02b4a224 + 0x2b49ef4));
    func_0x01438628(*(undefined4 *)(_UNK_02b4a228 + 0x2b49f00));
    func_0x01438628(*(undefined4 *)(_UNK_02b4a22c + 0x2b49f0c));
    func_0x01438628(*(undefined4 *)(_UNK_02b4a230 + 0x2b49f18));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x63f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x63f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar7 = (char *)(_UNK_0287f988 + 0x287f894);
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0287f98c + 0x287f8a8),param_1,param_2,0);
      *pcVar7 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x024f56c0(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    iStack_28 = iStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x024f56d0(iVar9,uVar10,&uStack_38,uVar6,0,0);
    iVar1 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_0287f990 + 0x287f978));
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 < param_2) {
    param_2 = iVar1;
    iStack_28 = iVar1;
  }
  if ((param_2 <= iVar1) && (*(int *)(param_1 + 0x68) < param_2)) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02b4a234 + 0x2b49f9c));
    func_0x024eed9c(iVar1,**(undefined4 **)(_UNK_02b4a238 + 0x2b49fb0));
    iVar9 = 0;
    puVar11 = *(undefined4 **)(_UNK_02b4a23c + 0x2b49fc8);
    iStack_2c = param_2;
    while( true ) {
      iVar2 = iStack_2c;
      iVar8 = *(int *)(param_1 + 0x60);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar8 = func_0x046cc810(iVar8,iVar2,*puVar11);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar8 = *(int *)(iVar8 + 0x18);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar8 + 0xc) <= iVar9) break;
      iVar8 = *(int *)(param_1 + 0x60);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar8 = func_0x046cc810(iVar8,iVar2,*puVar11);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar8 = *(int *)(iVar8 + 0x18);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      uVar10 = func_0x024f0530(iVar8,iVar9,**(undefined4 **)(_UNK_02b4a240 + 0x2b4a064));
      iVar8 = *(int *)(param_1 + 0x60);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x046cc810(iVar8,iVar2,*puVar11);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x1c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x024f0530(iVar2,iVar9,**(undefined4 **)(_UNK_02b4a244 + 0x2b4a0c4));
      uVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02b4a248 + 0x2b4a0dc));
      uStack_30 = 0;
      func_0x02ca3c70(uVar3,uVar10,uVar6,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar1 + 8);
      uVar12 = *(uint *)(iVar1 + 0xc);
      piVar5 = *(int **)(_UNK_02b4a24c + 0x2b4a12c);
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      iVar8 = *piVar5;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (uVar12 < *(uint *)(iVar2 + 0xc)) {
        *(uint *)(iVar1 + 0xc) = uVar12 + 1;
        puVar4 = (undefined4 *)(iVar2 + uVar12 * 4 + 0x10);
        *puVar4 = uVar3;
        func_0x014385cc(puVar4,uVar3);
      }
      else {
        func_0x0152874c(iVar1,uVar3,*(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38))
        ;
      }
      iVar9 = iVar9 + 1;
    }
    return iVar1;
  }
  uVar10 = func_0x01524ffc(&iStack_28,0);
  uVar6 = func_0x01438638(*(undefined4 *)(_UNK_02b4a250 + 0x2b4a1b0));
  uVar3 = func_0x01438638(*(undefined4 *)(_UNK_02b4a254 + 0x2b4a1c0));
  uVar10 = func_0x024eee28(uVar6,uVar10,uVar3,0);
  func_0x01438638(*(undefined4 *)(_UNK_02b4a258 + 0x2b4a1e4));
  uVar6 = func_0x014388d4();
  func_0x014e95c8(uVar6,uVar10,0);
  uVar10 = func_0x01438638(*(undefined4 *)(_UNK_02b4a25c + 0x2b4a204));
  func_0x01438790(uVar6,uVar10);
  func_0x014385d0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

