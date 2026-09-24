
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a002b0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 *puStack_78;
  undefined4 *puStack_74;
  undefined4 *puStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 auStack_3c [6];
  
  pcVar5 = (char *)(_UNK_02a007c4 + 0x2a002d4);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02a007c8 + 0x2a002e8));
    func_0x01438628(*(undefined4 *)(_UNK_02a007cc + 0x2a002f4));
    func_0x01438628(*(undefined4 *)(_UNK_02a007d0 + 0x2a00300));
    func_0x01438628(*(undefined4 *)(_UNK_02a007d4 + 0x2a0030c));
    func_0x01438628(*(undefined4 *)(_UNK_02a007d8 + 0x2a00318));
    func_0x01438628(*(undefined4 *)(_UNK_02a007dc + 0x2a00324));
    func_0x01438628(*(undefined4 *)(_UNK_02a007e0 + 0x2a00330));
    func_0x01438628(*(undefined4 *)(_UNK_02a007e4 + 0x2a0033c));
    func_0x01438628(*(undefined4 *)(_UNK_02a007e8 + 0x2a00348));
    func_0x01438628(*(undefined4 *)(_UNK_02a007ec + 0x2a00354));
    func_0x01438628(*(undefined4 *)(_UNK_02a007f0 + 0x2a00360));
    func_0x01438628(*(undefined4 *)(_UNK_02a007f4 + 0x2a0036c));
    func_0x01438628(*(undefined4 *)(_UNK_02a007f8 + 0x2a00378));
    *pcVar5 = '\x01';
  }
  auStack_3c[0] = 0;
  iVar1 = func_0x02953fd4(0x264b,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02a007fc + 0x2a003dc));
    func_0x024eeca8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 8) = param_2;
    func_0x014385cc((undefined4 *)(iVar1 + 8),param_2);
    if (*(int *)(**(int **)(_UNK_02a00800 + 0x2a00414) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02a00804 + 0x2a00434));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x28);
    uVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02a00808 + 0x2a00458));
    func_0x03a062d0(uVar3,iVar1,**(undefined4 **)(_UNK_02a0080c + 0x2a00478),0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    puStack_74 = &uStack_48;
    iVar1 = func_0x024f0618(iVar2,uVar3,**(undefined4 **)(_UNK_02a00810 + 0x2a004a4));
    puStack_78 = &uStack_50;
    uVar3 = 0;
    uVar10 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uVar13 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar14 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iVar2 = 0;
    puVar11 = *(undefined4 **)(_UNK_02a00814 + 0x2a004d0);
    puVar12 = *(undefined4 **)(_UNK_02a00818 + 0x2a004d8);
    puStack_70 = &uStack_58;
    while( true ) {
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar1 + 0xc);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar6 + 0xc) <= iVar2) break;
      iVar6 = FUN_029fd838(param_1);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar7 = *(int *)(iVar1 + 0xc);
      uVar9 = *(undefined4 *)(iVar6 + 0x20);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      uVar4 = func_0x024f0530(iVar7,iVar2,*puVar11);
      iVar6 = func_0x02b53c1c(uVar9,uVar4,0);
      if (iVar6 == 0) {
        iVar6 = *(int *)(iVar1 + 0xc);
        iVar7 = **(int **)(**(int **)(_UNK_02a0081c + 0x2a005e8) + 0x5c);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        uStack_64 = func_0x024f0530(iVar6,iVar2,*puVar11);
        iVar6 = *(int *)(iVar1 + 0x10);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        uStack_68 = func_0x024f0530(iVar6,iVar2,*puVar11);
        uStack_60 = uVar3;
        uStack_5c = uVar10;
        uStack_58 = uVar13;
        uStack_54 = uVar14;
        uStack_50 = uVar3;
        uStack_4c = uVar10;
        uStack_48 = uVar13;
        uStack_44 = uVar14;
        func_0x02028d38(&uStack_60,2,0);
        iStack_6c = iVar7;
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        uStack_90 = *puStack_74;
        uStack_8c = puStack_74[1];
        uStack_88 = 1;
        uStack_a0 = *puStack_70;
        uStack_9c = puStack_70[1];
        uStack_98 = *puStack_78;
        uStack_94 = puStack_78[1];
        uStack_84 = 0;
        uStack_80 = 0;
        uStack_7c = 0;
        func_0x02e64460(iStack_6c,uStack_64,uStack_68,&uStack_a0,uStack_60,uStack_5c);
      }
      else {
        iVar6 = 0;
        while( true ) {
          iVar7 = *(int *)(iVar1 + 0x10);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          iVar7 = func_0x024f0530(iVar7,iVar2,*puVar11);
          if (iVar7 <= iVar6) break;
          iVar7 = FUN_029fdc50(param_1);
          iVar8 = *(int *)(iVar1 + 0xc);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          uVar9 = func_0x024f0530(iVar8,iVar2,*puVar11);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar7,uVar9,*puVar12);
          iVar6 = iVar6 + 1;
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
        }
      }
      iVar2 = iVar2 + 1;
    }
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    uVar10 = *(undefined4 *)(iVar1 + 0x10);
    if (*(int *)(**(int **)(_UNK_02a00820 + 0x2a006d4) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar3 = func_0x02af43a8(uVar3,uVar10,0);
    if (*(int *)(**(int **)(_UNK_02a00824 + 0x2a0070c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x0202346c(0);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    auStack_3c[0] = func_0x024f0530(iVar1,0,*puVar11);
    uVar10 = func_0x01524ffc(auStack_3c,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    func_0x020257a4(iVar2,0x1dc,uVar10,**(undefined4 **)(_UNK_02a00828 + 0x2a00780),0,0);
    func_0x02a00834(param_1,uVar3);
  }
  else {
    iVar1 = func_0x029540a4(0x264b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}

