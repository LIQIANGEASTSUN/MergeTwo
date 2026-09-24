
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_018d4198(int param_1)

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
  pcVar8 = (char *)(_UNK_018cba1c + 0x18cb27c);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018cba20 + 0x18cb290),iVar10,0);
    func_0x01438628(*(undefined4 *)(_UNK_018cba24 + 0x18cb29c));
    func_0x01438628(*(undefined4 *)(_UNK_018cba28 + 0x18cb2a8));
    func_0x01438628(*(undefined4 *)(_UNK_018cba2c + 0x18cb2b4));
    func_0x01438628(*(undefined4 *)(_UNK_018cba30 + 0x18cb2c0));
    func_0x01438628(*(undefined4 *)(_UNK_018cba34 + 0x18cb2cc));
    func_0x01438628(*(undefined4 *)(_UNK_018cba38 + 0x18cb2d8));
    func_0x01438628(*(undefined4 *)(_UNK_018cba3c + 0x18cb2e4));
    func_0x01438628(*(undefined4 *)(_UNK_018cba40 + 0x18cb2f0));
    func_0x01438628(*(undefined4 *)(_UNK_018cba44 + 0x18cb2fc));
    func_0x01438628(*(undefined4 *)(_UNK_018cba48 + 0x18cb308));
    func_0x01438628(*(undefined4 *)(_UNK_018cba4c + 0x18cb314));
    func_0x01438628(*(undefined4 *)(_UNK_018cba50 + 0x18cb320));
    func_0x01438628(*(undefined4 *)(_UNK_018cba54 + 0x18cb32c));
    func_0x01438628(*(undefined4 *)(_UNK_018cba58 + 0x18cb338));
    func_0x01438628(*(undefined4 *)(_UNK_018cba5c + 0x18cb344));
    func_0x01438628(*(undefined4 *)(_UNK_018cba60 + 0x18cb350));
    func_0x01438628(*(undefined4 *)(_UNK_018cba64 + 0x18cb35c));
    func_0x01438628(*(undefined4 *)(_UNK_018cba68 + 0x18cb368));
    func_0x01438628(*(undefined4 *)(_UNK_018cba6c + 0x18cb374));
    func_0x01438628(*(undefined4 *)(_UNK_018cba70 + 0x18cb380));
    func_0x01438628(*(undefined4 *)(_UNK_018cba74 + 0x18cb38c));
    func_0x01438628(*(undefined4 *)(_UNK_018cba78 + 0x18cb398));
    func_0x01438628(*(undefined4 *)(_UNK_018cba7c + 0x18cb3a4));
    func_0x01438628(*(undefined4 *)(_UNK_018cba80 + 0x18cb3b0));
    func_0x01438628(*(undefined4 *)(_UNK_018cba84 + 0x18cb3bc));
    *pcVar8 = '\x01';
  }
  aiStack_28[0] = 0;
  iVar1 = func_0x02953fd4(0x94fe,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_018cba88 + 0x18cb420));
    func_0x018d41c4(iVar1,0);
    iVar3 = FUN_018c3704(iVar9);
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
    iVar3 = func_0x024f1110(iVar3,uVar2,**(undefined4 **)(_UNK_018cba8c + 0x18cb478));
    if (iVar3 == 0) {
      iVar3 = FUN_018c3704(iVar9);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x44);
      uVar2 = *(undefined4 *)(iVar10 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x024f1120(iVar3,uVar2,1,**(undefined4 **)(_UNK_018cba90 + 0x18cb4c8));
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_018cba94 + 0x18cb4dc));
      func_0x024eed9c(iVar3,**(undefined4 **)(_UNK_018cba98 + 0x18cb4f0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar14 = (int *)(iVar1 + 8);
      *piVar14 = iVar3;
      func_0x014385cc(piVar14,iVar3);
      iVar9 = FUN_018c4888(iVar9);
      uVar2 = *(undefined4 *)(iVar10 + 8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      func_0x024f064c(iVar9,uVar2,aiStack_28,**(undefined4 **)(_UNK_018cba9c + 0x18cb54c));
      iVar9 = aiStack_28[0];
      if (aiStack_28[0] == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar9 + 0x10) != 0) {
        iVar9 = 0;
        puVar12 = *(undefined4 **)(_UNK_018cbaa0 + 0x18cb580);
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
          uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_018cbaa4 + 0x18cb620));
          func_0x02ca3c70(uVar5,uVar2,uVar4,0,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar10 + 8);
          uVar11 = *(uint *)(iVar10 + 0xc);
          piVar7 = *(int **)(_UNK_018cbaa8 + 0x18cb670);
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
      iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_018cbaac + 0x18cb6d0));
      func_0x024f1124(iVar9,**(undefined4 **)(_UNK_018cbab0 + 0x18cb6e4));
      piVar7 = (int *)(iVar1 + 0xc);
      *piVar7 = iVar9;
      func_0x014385cc(piVar7,iVar9);
      iVar9 = *(int *)(iVar1 + 8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar9 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_018cbab4 + 0x18cb728) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = FUN_018c230c();
        if (iVar9 != 0) {
          func_0x018d552c(iVar9,0);
        }
        if (*(int *)(**(int **)(_UNK_018cbab8 + 0x18cb758) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x014e9518(**(undefined4 **)(_UNK_018cbabc + 0x18cb778));
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02bb3638(iVar9,0,0);
        iVar9 = 0;
        puVar12 = *(undefined4 **)(_UNK_018cbac0 + 0x18cb7b0);
        piVar13 = *(int **)(_UNK_018cbac4 + 0x18cb7b8);
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
          func_0x020257a4(iVar3,0x2cf,uVar2,uVar4,0,0,0);
          iVar9 = iVar9 + 1;
        }
        if (*(int *)(**(int **)(_UNK_018cbac8 + 0x18cb914) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x014e96a8(**(undefined4 **)(_UNK_018cbacc + 0x18cb930));
        iVar10 = *piVar14;
        if (*(int *)(**(int **)(_UNK_018cbad0 + 0x18cb944) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_018cbad4 + 0x18cb964));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar3 + 0x10);
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_018cbad8 + 0x18cb984));
        func_0x0152e3ec(uVar2,iVar1,**(undefined4 **)(_UNK_018cbadc + 0x18cb9a4),0);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02b75870(iVar9,iVar10,uVar4,1,0xd2,0,0,0,0,0,0,0,uVar2,0,0);
        iVar9 = *piVar7;
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        return *(undefined4 *)(iVar9 + 8);
      }
    }
    piVar14 = *(int **)(_UNK_018cbae0 + 0x18cb8ac);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar8 = (char *)(_UNK_018cbae4 + 0x18cb8c8);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_018cbae8 + 0x18cb8dc));
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
    iVar1 = func_0x029540a4(0x94fe,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02884efc(iVar1,iVar9,iVar10,0);
  }
  return uVar2;
}

