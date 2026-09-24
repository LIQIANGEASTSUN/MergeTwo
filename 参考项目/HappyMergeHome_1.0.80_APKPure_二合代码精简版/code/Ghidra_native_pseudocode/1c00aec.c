
/* WARNING: Possible PIC construction at 0x01c10f48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01c10f4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c10aec(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int unaff_r4;
  char *pcVar9;
  int *piVar10;
  int unaff_r5;
  undefined4 unaff_r6;
  int iVar11;
  undefined4 uVar12;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 *unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar9 = (char *)(_UNK_01c10dec + 0x1c10b04);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c10df0 + 0x1c10b18));
    func_0x01438628(*(undefined4 *)(_UNK_01c10df4 + 0x1c10b24));
    func_0x01438628(*(undefined4 *)(_UNK_01c10df8 + 0x1c10b30));
    func_0x01438628(*(undefined4 *)(_UNK_01c10dfc + 0x1c10b3c));
    func_0x01438628(*(undefined4 *)(_UNK_01c10e00 + 0x1c10b48));
    func_0x01438628(*(undefined4 *)(_UNK_01c10e04 + 0x1c10b54));
    func_0x01438628(*(undefined4 *)(_UNK_01c10e08 + 0x1c10b60));
    func_0x01438628(*(undefined4 *)(_UNK_01c10e0c + 0x1c10b6c));
    func_0x01438628(*(undefined4 *)(_UNK_01c10e10 + 0x1c10b78));
    func_0x01438628(*(undefined4 *)(_UNK_01c10e14 + 0x1c10b84));
    func_0x01438628(*(undefined4 *)(_UNK_01c10e18 + 0x1c10b90));
    *pcVar9 = '\x01';
  }
  iVar5 = func_0x02953fd4(0x2d35,0);
  if (iVar5 == 0) {
    iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_01c10e1c + 0x1c10bec));
    func_0x024eeca8(iVar5,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    *(int *)(iVar5 + 8) = param_2;
    func_0x014385cc((int *)(iVar5 + 8),param_2);
    if (*(int *)(**(int **)(_UNK_01c10e20 + 0x1c10c24) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_01c10e24 + 0x1c10c40));
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(iVar7 + 0x28);
    uVar12 = func_0x014388d4(**(undefined4 **)(_UNK_01c10e28 + 0x1c10c60));
    func_0x03a062d0(uVar12,iVar5,**(undefined4 **)(_UNK_01c10e2c + 0x1c10c80),0);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x024f0618(iVar7,uVar12,**(undefined4 **)(_UNK_01c10e30 + 0x1c10ca4));
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar12 = *(undefined4 *)(iVar5 + 0xc);
    uVar8 = *(undefined4 *)(iVar5 + 0x10);
    if (*(int *)(**(int **)(_UNK_01c10e34 + 0x1c10cc8) + 0x74) == 0) {
      func_0x014387a4();
    }
    param_2 = func_0x02af43a8(uVar12,uVar8,0);
    if (*(int *)(**(int **)(_UNK_01c10e38 + 0x1c10d00) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_01c10e3c + 0x1c10d1c));
    piVar10 = *(int **)(_UNK_01c10e40 + 0x1c10d30);
    iVar7 = *piVar10;
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x014387a4();
      iVar7 = *piVar10;
    }
    uVar12 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x1ac);
    piVar10 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01c10e44 + 0x1c10d54),1);
    if (piVar10 == (int *)0x0) {
      func_0x014388e4();
    }
    if ((param_2 != 0) &&
       (iVar7 = func_0x014387a8(param_2,*(undefined4 *)(*piVar10 + 0x20)), iVar7 == 0)) {
      uVar8 = func_0x01438904();
      func_0x01438790(uVar8,0);
    }
    if (piVar10[3] == 0) {
      func_0x014388e8();
    }
    piVar10[4] = param_2;
    func_0x014385cc(piVar10 + 4,param_2);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x029901b4(iVar5,uVar12,piVar10,0);
    unaff_r9 = &uStack_48;
    pcVar9 = (char *)(_UNK_01c11144 + 0x1c10e70);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_01c11148 + 0x1c10e84));
      func_0x01438628(*(undefined4 *)(_UNK_01c1114c + 0x1c10e90));
      func_0x01438628(*(undefined4 *)(_UNK_01c11150 + 0x1c10e9c));
      func_0x01438628(*(undefined4 *)(_UNK_01c11154 + 0x1c10ea8));
      func_0x01438628(*(undefined4 *)(_UNK_01c11158 + 0x1c10eb4));
      func_0x01438628(*(undefined4 *)(_UNK_01c1115c + 0x1c10ec0));
      func_0x01438628(*(undefined4 *)(_UNK_01c11160 + 0x1c10ecc));
      func_0x01438628(*(undefined4 *)(_UNK_01c11164 + 0x1c10ed8));
      func_0x01438628(*(undefined4 *)(_UNK_01c11168 + 0x1c10ee4));
      func_0x01438628(*(undefined4 *)(_UNK_01c1116c + 0x1c10ef0));
      *pcVar9 = '\x01';
    }
    uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_48 = 0;
    uStack_38 = 0;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    iVar5 = func_0x02953fd4(0x2d3b,0);
    if (iVar5 == 0) {
      iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_01c11170 + 0x1c10f5c));
      func_0x024eeca8(iVar5,0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      *(undefined4 *)(iVar5 + 8) = param_1;
      func_0x014385cc((undefined4 *)(iVar5 + 8),param_1);
      piVar10 = (int *)(iVar5 + 0xc);
      *piVar10 = param_2;
      func_0x014385cc(piVar10,param_2);
      iVar7 = *piVar10;
      if ((iVar7 != 0) && (iVar11 = *(int *)(iVar7 + 0xc), 0 < iVar11)) {
        if (7 < iVar11) {
          iVar11 = 8;
        }
        uStack_4c = func_0x024f1914(iVar7,0,iVar11,**(undefined4 **)(_UNK_01c11174 + 0x1c10fcc));
        iVar7 = *piVar10;
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        func_0x024f1924(iVar7,0,iVar11,**(undefined4 **)(_UNK_01c11178 + 0x1c10ffc));
        func_0x02028d38(&uStack_48,2,0);
        if (*(int *)(**(int **)(_UNK_01c1117c + 0x1c11020) + 0x74) == 0) {
          func_0x014387a4();
        }
        iStack_50 = func_0x03b2c734(**(undefined4 **)(_UNK_01c11180 + 0x1c1103c));
        if (*(int *)(**(int **)(_UNK_01c11184 + 0x1c11050) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_01c11188 + 0x1c11074));
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        uStack_54 = func_0x029be154(iVar7,0);
        uVar4 = uStack_30;
        uVar3 = uStack_34;
        uVar2 = uStack_38;
        uVar1 = uStack_3c;
        uVar8 = uStack_44;
        uVar12 = uStack_48;
        uStack_58 = uStack_40;
        uStack_5c = uStack_2c;
        uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_01c1118c + 0x1c110bc));
        func_0x0152e3ec(uVar6,iVar5,**(undefined4 **)(_UNK_01c11190 + 0x1c110e0),0);
        iVar5 = iStack_50;
        if (iStack_50 == 0) {
          func_0x014388e4();
        }
        uStack_64 = 0;
        uStack_60 = 0;
        uStack_80 = uStack_58;
        uStack_7c = uVar1;
        uStack_78 = uVar2;
        uStack_74 = uVar3;
        uStack_6c = uStack_5c;
        uStack_88 = uVar12;
        uStack_84 = uVar8;
        uStack_70 = uVar4;
        uStack_68 = uVar6;
        func_0x02b75870(iVar5,uStack_4c,uStack_54,1);
      }
      return;
    }
    iVar5 = func_0x029540a4(0x2d3b,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    unaff_lr = 0x1c10f4c;
    unaff_r4 = iVar5;
    unaff_r5 = param_2;
    unaff_r6 = param_1;
    register0x00000054 = (BADSPACEBASE *)&uStack_88;
  }
  else {
    iVar5 = func_0x029540a4(0x2d35,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(undefined4 **)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x024f56c0((undefined4 *)((int)register0x00000054 + -0x50),0,param_2,0);
  iVar7 = *(int *)(iVar5 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x38) =
       *(undefined4 *)((int)register0x00000054 + -0x50);
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  if (iVar7 != 0) {
    func_0x01523a6c((undefined1 *)((int)register0x00000054 + -0x38),iVar7,0);
  }
  func_0x01523a6c((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01523a6c((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar7 = *(int *)(iVar5 + 8);
  uVar12 = *(undefined4 *)(iVar5 + 0xc);
  iVar5 = *(int *)(iVar5 + 0x10);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar8 = 3;
  if (iVar5 == 0) {
    uVar8 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x024f56d0(iVar7,uVar12,(undefined1 *)((int)register0x00000054 + -0x38),uVar8);
  return;
}

