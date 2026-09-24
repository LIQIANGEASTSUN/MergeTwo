
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01654014(int param_1)

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
  pcVar8 = (char *)(_UNK_0164b978 + 0x164b1d8);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0164b97c + 0x164b1ec),iVar10,0);
    func_0x01438628(*(undefined4 *)(_UNK_0164b980 + 0x164b1f8));
    func_0x01438628(*(undefined4 *)(_UNK_0164b984 + 0x164b204));
    func_0x01438628(*(undefined4 *)(_UNK_0164b988 + 0x164b210));
    func_0x01438628(*(undefined4 *)(_UNK_0164b98c + 0x164b21c));
    func_0x01438628(*(undefined4 *)(_UNK_0164b990 + 0x164b228));
    func_0x01438628(*(undefined4 *)(_UNK_0164b994 + 0x164b234));
    func_0x01438628(*(undefined4 *)(_UNK_0164b998 + 0x164b240));
    func_0x01438628(*(undefined4 *)(_UNK_0164b99c + 0x164b24c));
    func_0x01438628(*(undefined4 *)(_UNK_0164b9a0 + 0x164b258));
    func_0x01438628(*(undefined4 *)(_UNK_0164b9a4 + 0x164b264));
    func_0x01438628(*(undefined4 *)(_UNK_0164b9a8 + 0x164b270));
    func_0x01438628(*(undefined4 *)(_UNK_0164b9ac + 0x164b27c));
    func_0x01438628(*(undefined4 *)(_UNK_0164b9b0 + 0x164b288));
    func_0x01438628(*(undefined4 *)(_UNK_0164b9b4 + 0x164b294));
    func_0x01438628(*(undefined4 *)(_UNK_0164b9b8 + 0x164b2a0));
    func_0x01438628(*(undefined4 *)(_UNK_0164b9bc + 0x164b2ac));
    func_0x01438628(*(undefined4 *)(_UNK_0164b9c0 + 0x164b2b8));
    func_0x01438628(*(undefined4 *)(_UNK_0164b9c4 + 0x164b2c4));
    func_0x01438628(*(undefined4 *)(_UNK_0164b9c8 + 0x164b2d0));
    func_0x01438628(*(undefined4 *)(_UNK_0164b9cc + 0x164b2dc));
    func_0x01438628(*(undefined4 *)(_UNK_0164b9d0 + 0x164b2e8));
    func_0x01438628(*(undefined4 *)(_UNK_0164b9d4 + 0x164b2f4));
    func_0x01438628(*(undefined4 *)(_UNK_0164b9d8 + 0x164b300));
    func_0x01438628(*(undefined4 *)(_UNK_0164b9dc + 0x164b30c));
    func_0x01438628(*(undefined4 *)(_UNK_0164b9e0 + 0x164b318));
    *pcVar8 = '\x01';
  }
  aiStack_28[0] = 0;
  iVar1 = func_0x02953fd4(0x85d9,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0164b9e4 + 0x164b37c));
    func_0x01654040(iVar1,0);
    iVar3 = FUN_01642704(iVar9);
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
    iVar3 = func_0x024f1110(iVar3,uVar2,**(undefined4 **)(_UNK_0164b9e8 + 0x164b3d4));
    if (iVar3 == 0) {
      iVar3 = FUN_01642704(iVar9);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x44);
      uVar2 = *(undefined4 *)(iVar10 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x024f1120(iVar3,uVar2,1,**(undefined4 **)(_UNK_0164b9ec + 0x164b424));
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0164b9f0 + 0x164b438));
      func_0x024eed9c(iVar3,**(undefined4 **)(_UNK_0164b9f4 + 0x164b44c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar14 = (int *)(iVar1 + 8);
      *piVar14 = iVar3;
      func_0x014385cc(piVar14,iVar3);
      iVar9 = FUN_01643888(iVar9);
      uVar2 = *(undefined4 *)(iVar10 + 8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      func_0x024f064c(iVar9,uVar2,aiStack_28,**(undefined4 **)(_UNK_0164b9f8 + 0x164b4a8));
      iVar9 = aiStack_28[0];
      if (aiStack_28[0] == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar9 + 0x10) != 0) {
        iVar9 = 0;
        puVar12 = *(undefined4 **)(_UNK_0164b9fc + 0x164b4dc);
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
          uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0164ba00 + 0x164b57c));
          func_0x02ca3c70(uVar5,uVar2,uVar4,0,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar10 + 8);
          uVar11 = *(uint *)(iVar10 + 0xc);
          piVar7 = *(int **)(_UNK_0164ba04 + 0x164b5cc);
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
      iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_0164ba08 + 0x164b62c));
      func_0x024f1124(iVar9,**(undefined4 **)(_UNK_0164ba0c + 0x164b640));
      piVar7 = (int *)(iVar1 + 0xc);
      *piVar7 = iVar9;
      func_0x014385cc(piVar7,iVar9);
      iVar9 = *(int *)(iVar1 + 8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar9 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_0164ba10 + 0x164b684) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = FUN_01640370();
        if (iVar9 != 0) {
          func_0x0165535c(iVar9,0);
        }
        if (*(int *)(**(int **)(_UNK_0164ba14 + 0x164b6b4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x014e9518(**(undefined4 **)(_UNK_0164ba18 + 0x164b6d4));
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02bb3638(iVar9,0,0);
        iVar9 = 0;
        puVar12 = *(undefined4 **)(_UNK_0164ba1c + 0x164b70c);
        piVar13 = *(int **)(_UNK_0164ba20 + 0x164b714);
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
          func_0x020257a4(iVar3,0x344,uVar2,uVar4,0,0,0);
          iVar9 = iVar9 + 1;
        }
        if (*(int *)(**(int **)(_UNK_0164ba24 + 0x164b870) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x014e96a8(**(undefined4 **)(_UNK_0164ba28 + 0x164b88c));
        iVar10 = *piVar14;
        if (*(int *)(**(int **)(_UNK_0164ba2c + 0x164b8a0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_0164ba30 + 0x164b8c0));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar3 + 0x10);
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0164ba34 + 0x164b8e0));
        func_0x0152e3ec(uVar2,iVar1,**(undefined4 **)(_UNK_0164ba38 + 0x164b900),0);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02b75870(iVar9,iVar10,uVar4,1,0x122,0,0,0,0,0,0,0,uVar2,0,0);
        iVar9 = *piVar7;
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        return *(undefined4 *)(iVar9 + 8);
      }
    }
    piVar14 = *(int **)(_UNK_0164ba3c + 0x164b808);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar8 = (char *)(_UNK_0164ba40 + 0x164b824);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0164ba44 + 0x164b838));
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
    iVar1 = func_0x029540a4(0x85d9,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02884efc(iVar1,iVar9,iVar10,0);
  }
  return uVar2;
}

