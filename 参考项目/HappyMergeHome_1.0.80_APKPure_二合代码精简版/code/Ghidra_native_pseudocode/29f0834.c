
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a00834(undefined4 param_1,int param_2)

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
  
  pcVar14 = (char *)(_UNK_02a00b28 + 0x2a00854);
  if (*pcVar14 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02a00b2c + 0x2a00868));
    func_0x01438628(*(undefined4 *)(_UNK_02a00b30 + 0x2a00874));
    func_0x01438628(*(undefined4 *)(_UNK_02a00b34 + 0x2a00880));
    func_0x01438628(*(undefined4 *)(_UNK_02a00b38 + 0x2a0088c));
    func_0x01438628(*(undefined4 *)(_UNK_02a00b3c + 0x2a00898));
    func_0x01438628(*(undefined4 *)(_UNK_02a00b40 + 0x2a008a4));
    func_0x01438628(*(undefined4 *)(_UNK_02a00b44 + 0x2a008b0));
    func_0x01438628(*(undefined4 *)(_UNK_02a00b48 + 0x2a008bc));
    func_0x01438628(*(undefined4 *)(_UNK_02a00b4c + 0x2a008c8));
    func_0x01438628(*(undefined4 *)(_UNK_02a00b50 + 0x2a008d4));
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
  iVar9 = func_0x02953fd4(0x2651,0);
  if (iVar9 == 0) {
    iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_02a00b54 + 0x2a00940));
    func_0x024eeca8(iVar9,0);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar9 + 8) = param_1;
    func_0x014385cc((undefined4 *)(iVar9 + 8),param_1);
    piVar16 = (int *)(iVar9 + 0xc);
    *piVar16 = param_2;
    func_0x014385cc(piVar16,param_2);
    iVar10 = *piVar16;
    if ((iVar10 != 0) && (iVar15 = *(int *)(iVar10 + 0xc), 0 < iVar15)) {
      if (7 < iVar15) {
        iVar15 = 8;
      }
      uVar11 = func_0x024f1914(iVar10,0,iVar15,**(undefined4 **)(_UNK_02a00b58 + 0x2a009b0));
      iVar10 = *piVar16;
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      func_0x024f1924(iVar10,0,iVar15,**(undefined4 **)(_UNK_02a00b5c + 0x2a009e0));
      func_0x02028d38(&uStack_48,2,0);
      if (*(int *)(**(int **)(_UNK_02a00b60 + 0x2a00a04) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar10 = func_0x03b2c734(**(undefined4 **)(_UNK_02a00b64 + 0x2a00a20));
      if (*(int *)(**(int **)(_UNK_02a00b68 + 0x2a00a34) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar15 = func_0x014e9518(**(undefined4 **)(_UNK_02a00b6c + 0x2a00a58));
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
      uVar13 = func_0x014388d4(**(undefined4 **)(_UNK_02a00b70 + 0x2a00aa0));
      func_0x0152e3ec(uVar13,iVar9,**(undefined4 **)(_UNK_02a00b74 + 0x2a00ac4),0);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      func_0x02b75870(iVar10,uVar11,uVar12,0,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar13,
                      0,0);
    }
  }
  else {
    iVar9 = func_0x029540a4(0x2651,0);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar9,param_1,param_2,0);
  }
  return;
}

