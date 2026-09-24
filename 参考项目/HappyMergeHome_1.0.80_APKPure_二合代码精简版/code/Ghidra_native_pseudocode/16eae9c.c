
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016fae9c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int aiStack_28 [3];
  
  iVar9 = *(int *)(param_1 + 8);
  iVar10 = *(int *)(param_1 + 0xc);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  pcVar8 = (char *)(_UNK_016f6cb0 + 0x16f6510);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016f6cb4 + 0x16f6524));
    func_0x01438628(*(undefined4 *)(_UNK_016f6cb8 + 0x16f6530));
    func_0x01438628(*(undefined4 *)(_UNK_016f6cbc + 0x16f653c));
    func_0x01438628(*(undefined4 *)(_UNK_016f6cc0 + 0x16f6548));
    func_0x01438628(*(undefined4 *)(_UNK_016f6cc4 + 0x16f6554));
    func_0x01438628(*(undefined4 *)(_UNK_016f6cc8 + 0x16f6560));
    func_0x01438628(*(undefined4 *)(_UNK_016f6ccc + 0x16f656c));
    func_0x01438628(*(undefined4 *)(_UNK_016f6cd0 + 0x16f6578));
    func_0x01438628(*(undefined4 *)(_UNK_016f6cd4 + 0x16f6584));
    func_0x01438628(*(undefined4 *)(_UNK_016f6cd8 + 0x16f6590));
    func_0x01438628(*(undefined4 *)(_UNK_016f6cdc + 0x16f659c));
    func_0x01438628(*(undefined4 *)(_UNK_016f6ce0 + 0x16f65a8));
    func_0x01438628(*(undefined4 *)(_UNK_016f6ce4 + 0x16f65b4));
    func_0x01438628(*(undefined4 *)(_UNK_016f6ce8 + 0x16f65c0));
    func_0x01438628(*(undefined4 *)(_UNK_016f6cec + 0x16f65cc));
    func_0x01438628(*(undefined4 *)(_UNK_016f6cf0 + 0x16f65d8));
    func_0x01438628(*(undefined4 *)(_UNK_016f6cf4 + 0x16f65e4));
    func_0x01438628(*(undefined4 *)(_UNK_016f6cf8 + 0x16f65f0));
    func_0x01438628(*(undefined4 *)(_UNK_016f6cfc + 0x16f65fc));
    func_0x01438628(*(undefined4 *)(_UNK_016f6d00 + 0x16f6608));
    func_0x01438628(*(undefined4 *)(_UNK_016f6d04 + 0x16f6614));
    func_0x01438628(*(undefined4 *)(_UNK_016f6d08 + 0x16f6620));
    func_0x01438628(*(undefined4 *)(_UNK_016f6d0c + 0x16f662c));
    func_0x01438628(*(undefined4 *)(_UNK_016f6d10 + 0x16f6638));
    func_0x01438628(*(undefined4 *)(_UNK_016f6d14 + 0x16f6644));
    func_0x01438628(*(undefined4 *)(_UNK_016f6d18 + 0x16f6650));
    *pcVar8 = '\x01';
  }
  aiStack_28[0] = 0;
  iVar1 = func_0x02953fd4(0x8a61,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_016f6d1c + 0x16f66b4));
    func_0x024eeca8(iVar1,0);
    iVar3 = FUN_016ef2ac(iVar9);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x44);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    uVar2 = *(undefined4 *)(iVar10 + 8);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x024f1110(iVar3,uVar2,**(undefined4 **)(_UNK_016f6d20 + 0x16f670c));
    if (iVar3 == 0) {
      iVar3 = FUN_016ef2ac(iVar9);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x44);
      uVar2 = *(undefined4 *)(iVar10 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x024f1120(iVar3,uVar2,1,**(undefined4 **)(_UNK_016f6d24 + 0x16f675c));
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_016f6d28 + 0x16f6770));
      func_0x024eed9c(iVar3,**(undefined4 **)(_UNK_016f6d2c + 0x16f6784));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar14 = (int *)(iVar1 + 8);
      *piVar14 = iVar3;
      func_0x014385cc(piVar14,iVar3);
      iVar9 = FUN_016f0010(iVar9);
      uVar2 = *(undefined4 *)(iVar10 + 8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      func_0x024f064c(iVar9,uVar2,aiStack_28,**(undefined4 **)(_UNK_016f6d30 + 0x16f67e0));
      iVar9 = aiStack_28[0];
      if (aiStack_28[0] == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar9 + 0x10) != 0) {
        iVar9 = 0;
        puVar12 = *(undefined4 **)(_UNK_016f6d34 + 0x16f6814);
        while( true ) {
          iVar10 = aiStack_28[0];
          if (aiStack_28[0] == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar10 + 0x10);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar3 = aiStack_28[0];
          if (*(int *)(iVar10 + 0xc) <= iVar9) break;
          iVar10 = *piVar14;
          if (aiStack_28[0] == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x10);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar2 = func_0x024f0530(iVar3,iVar9,*puVar12);
          iVar3 = aiStack_28[0];
          if (aiStack_28[0] == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x14);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar4 = func_0x024f0530(iVar3,iVar9,*puVar12);
          uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_016f6d38 + 0x16f68b4));
          func_0x02ca3c70(uVar5,uVar2,uVar4,0,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar10 + 8);
          uVar11 = *(uint *)(iVar10 + 0xc);
          piVar7 = *(int **)(_UNK_016f6d3c + 0x16f6904);
          *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
          iVar15 = *piVar7;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          if (uVar11 < *(uint *)(iVar3 + 0xc)) {
            *(uint *)(iVar10 + 0xc) = uVar11 + 1;
            puVar6 = (undefined4 *)(iVar3 + uVar11 * 4 + 0x10);
            *puVar6 = uVar5;
            func_0x014385cc(puVar6,uVar5);
          }
          else {
            func_0x0152874c(iVar10,uVar5,
                            *(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38));
          }
          iVar9 = iVar9 + 1;
        }
      }
      iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_016f6d40 + 0x16f6964));
      func_0x024f1124(iVar9,**(undefined4 **)(_UNK_016f6d44 + 0x16f6978));
      piVar7 = (int *)(iVar1 + 0xc);
      *piVar7 = iVar9;
      func_0x014385cc(piVar7,iVar9);
      iVar9 = *(int *)(iVar1 + 8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar9 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_016f6d48 + 0x16f69bc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = FUN_016edd54();
        if (iVar9 != 0) {
          func_0x01708f54(iVar9,0);
        }
        if (*(int *)(**(int **)(_UNK_016f6d4c + 0x16f69ec) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x014e9518(**(undefined4 **)(_UNK_016f6d50 + 0x16f6a0c));
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02bb3638(iVar9,0,0);
        iVar9 = 0;
        puVar12 = *(undefined4 **)(_UNK_016f6d54 + 0x16f6a44);
        piVar13 = *(int **)(_UNK_016f6d58 + 0x16f6a4c);
        while( true ) {
          iVar10 = *piVar14;
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar10 + 0xc) <= iVar9) break;
          iVar10 = *piVar14;
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar10 = func_0x0152983c(iVar10,iVar9,*puVar12);
          if (*(int *)(*piVar13 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          if (iVar10 == 0) {
            func_0x014388e4();
            uVar2 = func_0x01524ffc(8,0);
            func_0x014388e4();
          }
          else {
            uVar2 = func_0x01524ffc(iVar10 + 8,0);
          }
          uVar4 = func_0x01524ffc(iVar10 + 0xc,0);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x020257a4(iVar3,0x220,uVar2,uVar4,0,0,0);
          iVar9 = iVar9 + 1;
        }
        if (*(int *)(**(int **)(_UNK_016f6d5c + 0x16f6ba8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x014e96a8(**(undefined4 **)(_UNK_016f6d60 + 0x16f6bc4));
        iVar10 = *piVar14;
        if (*(int *)(**(int **)(_UNK_016f6d64 + 0x16f6bd8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_016f6d68 + 0x16f6bf8));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar3 + 0x10);
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_016f6d6c + 0x16f6c18));
        func_0x0152e3ec(uVar2,iVar1,**(undefined4 **)(_UNK_016f6d70 + 0x16f6c38),0);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02b75870(iVar9,iVar10,uVar4,1,0x69,0,0,0,0,0,0,0,uVar2,0,0);
        iVar9 = *piVar7;
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        return *(undefined4 *)(iVar9 + 8);
      }
    }
    piVar14 = *(int **)(_UNK_016f6d74 + 0x16f6b40);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar8 = (char *)(_UNK_016f6d78 + 0x16f6b5c);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_016f6d7c + 0x16f6b70));
      *pcVar8 = '\x01';
    }
    iVar9 = *piVar14;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x014387a4();
      iVar9 = *piVar14;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar9 + 0x5c) + 0x18);
  }
  else {
    iVar1 = func_0x029540a4(0x8a61,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02884efc(iVar1,iVar9,iVar10,0);
  }
  return uVar2;
}

