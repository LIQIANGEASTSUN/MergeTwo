
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bc5080(undefined4 param_1,int param_2)

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
  
  pcVar14 = (char *)(_UNK_01bc5374 + 0x1bc50a0);
  if (*pcVar14 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01bc5378 + 0x1bc50b4));
    func_0x01438628(*(undefined4 *)(_UNK_01bc537c + 0x1bc50c0));
    func_0x01438628(*(undefined4 *)(_UNK_01bc5380 + 0x1bc50cc));
    func_0x01438628(*(undefined4 *)(_UNK_01bc5384 + 0x1bc50d8));
    func_0x01438628(*(undefined4 *)(_UNK_01bc5388 + 0x1bc50e4));
    func_0x01438628(*(undefined4 *)(_UNK_01bc538c + 0x1bc50f0));
    func_0x01438628(*(undefined4 *)(_UNK_01bc5390 + 0x1bc50fc));
    func_0x01438628(*(undefined4 *)(_UNK_01bc5394 + 0x1bc5108));
    func_0x01438628(*(undefined4 *)(_UNK_01bc5398 + 0x1bc5114));
    func_0x01438628(*(undefined4 *)(_UNK_01bc539c + 0x1bc5120));
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
  iVar9 = func_0x02953fd4(0x2d5a,0);
  if (iVar9 == 0) {
    iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_01bc53a0 + 0x1bc518c));
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
      uVar11 = func_0x024f1914(iVar10,0,iVar15,**(undefined4 **)(_UNK_01bc53a4 + 0x1bc51fc));
      iVar10 = *piVar16;
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      func_0x024f1924(iVar10,0,iVar15,**(undefined4 **)(_UNK_01bc53a8 + 0x1bc522c));
      func_0x02028d38(&uStack_48,2,0);
      if (*(int *)(**(int **)(_UNK_01bc53ac + 0x1bc5250) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar10 = func_0x03b2c734(**(undefined4 **)(_UNK_01bc53b0 + 0x1bc526c));
      if (*(int *)(**(int **)(_UNK_01bc53b4 + 0x1bc5280) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar15 = func_0x014e9518(**(undefined4 **)(_UNK_01bc53b8 + 0x1bc52a4));
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
      uVar13 = func_0x014388d4(**(undefined4 **)(_UNK_01bc53bc + 0x1bc52ec));
      func_0x0152e3ec(uVar13,iVar9,**(undefined4 **)(_UNK_01bc53c0 + 0x1bc5310),0);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      func_0x02b75870(iVar10,uVar11,uVar12,1,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar13,
                      0,0);
    }
  }
  else {
    iVar9 = func_0x029540a4(0x2d5a,0);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar9,param_1,param_2,0);
  }
  return;
}

