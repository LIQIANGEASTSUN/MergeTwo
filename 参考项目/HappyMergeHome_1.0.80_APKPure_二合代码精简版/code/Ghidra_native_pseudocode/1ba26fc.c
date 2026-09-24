
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bb26fc(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char *pcVar14;
  int iVar15;
  int *piVar16;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar14 = (char *)(_UNK_01bb29f0 + 0x1bb271c);
  if (*pcVar14 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01bb29f4 + 0x1bb2730));
    func_0x01438628(*(undefined4 *)(_UNK_01bb29f8 + 0x1bb273c));
    func_0x01438628(*(undefined4 *)(_UNK_01bb29fc + 0x1bb2748));
    func_0x01438628(*(undefined4 *)(_UNK_01bb2a00 + 0x1bb2754));
    func_0x01438628(*(undefined4 *)(_UNK_01bb2a04 + 0x1bb2760));
    func_0x01438628(*(undefined4 *)(_UNK_01bb2a08 + 0x1bb276c));
    func_0x01438628(*(undefined4 *)(_UNK_01bb2a0c + 0x1bb2778));
    func_0x01438628(*(undefined4 *)(_UNK_01bb2a10 + 0x1bb2784));
    func_0x01438628(*(undefined4 *)(_UNK_01bb2a14 + 0x1bb2790));
    func_0x01438628(*(undefined4 *)(_UNK_01bb2a18 + 0x1bb279c));
    *pcVar14 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  iVar9 = func_0x02953fd4(0x2d64,0);
  if (iVar9 == 0) {
    iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_01bb2a1c + 0x1bb2808));
    func_0x024eeca8(iVar9,0);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    piVar16 = (int *)(iVar9 + 8);
    *piVar16 = param_2;
    func_0x014385cc(piVar16,param_2);
    *(undefined4 *)(iVar9 + 0xc) = param_1;
    func_0x014385cc((undefined4 *)(iVar9 + 0xc),param_1);
    iVar10 = *piVar16;
    if ((iVar10 != 0) && (iVar15 = *(int *)(iVar10 + 0xc), 0 < iVar15)) {
      if (7 < iVar15) {
        iVar15 = 8;
      }
      uVar11 = func_0x024f1914(iVar10,0,iVar15,**(undefined4 **)(_UNK_01bb2a20 + 0x1bb2878));
      iVar10 = *piVar16;
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      func_0x024f1924(iVar10,0,iVar15,**(undefined4 **)(_UNK_01bb2a24 + 0x1bb28a8));
      func_0x02028d38(&uStack_48,2,0);
      if (*(int *)(**(int **)(_UNK_01bb2a28 + 0x1bb28cc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar10 = func_0x03b2c734(**(undefined4 **)(_UNK_01bb2a2c + 0x1bb28e8));
      if (*(int *)(**(int **)(_UNK_01bb2a30 + 0x1bb28fc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar15 = func_0x014e9518(**(undefined4 **)(_UNK_01bb2a34 + 0x1bb2920));
      if (iVar15 == 0) {
        func_0x014388e4();
      }
      uVar12 = func_0x029be154(iVar15,0);
      uVar8 = uStack_2c;
      uVar7 = uStack_30;
      uVar6 = uStack_34;
      uVar5 = uStack_38;
      uVar4 = uStack_3c;
      uVar3 = uStack_40;
      uVar2 = uStack_44;
      uVar1 = uStack_48;
      uVar13 = func_0x014388d4(**(undefined4 **)(_UNK_01bb2a38 + 0x1bb2968));
      func_0x0152e3ec(uVar13,iVar9,**(undefined4 **)(_UNK_01bb2a3c + 0x1bb298c),0);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      func_0x02b75870(iVar10,uVar11,uVar12,1,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar13,
                      0,0);
    }
  }
  else {
    iVar9 = func_0x029540a4(0x2d64,0);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar9,param_1,param_2,0);
  }
  return;
}

