
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01725b94(int param_1)

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
  pcVar8 = (char *)(_UNK_0171ca68 + 0x171c2c8);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0171ca6c + 0x171c2dc),iVar10,0);
    func_0x01438628(*(undefined4 *)(_UNK_0171ca70 + 0x171c2e8));
    func_0x01438628(*(undefined4 *)(_UNK_0171ca74 + 0x171c2f4));
    func_0x01438628(*(undefined4 *)(_UNK_0171ca78 + 0x171c300));
    func_0x01438628(*(undefined4 *)(_UNK_0171ca7c + 0x171c30c));
    func_0x01438628(*(undefined4 *)(_UNK_0171ca80 + 0x171c318));
    func_0x01438628(*(undefined4 *)(_UNK_0171ca84 + 0x171c324));
    func_0x01438628(*(undefined4 *)(_UNK_0171ca88 + 0x171c330));
    func_0x01438628(*(undefined4 *)(_UNK_0171ca8c + 0x171c33c));
    func_0x01438628(*(undefined4 *)(_UNK_0171ca90 + 0x171c348));
    func_0x01438628(*(undefined4 *)(_UNK_0171ca94 + 0x171c354));
    func_0x01438628(*(undefined4 *)(_UNK_0171ca98 + 0x171c360));
    func_0x01438628(*(undefined4 *)(_UNK_0171ca9c + 0x171c36c));
    func_0x01438628(*(undefined4 *)(_UNK_0171caa0 + 0x171c378));
    func_0x01438628(*(undefined4 *)(_UNK_0171caa4 + 0x171c384));
    func_0x01438628(*(undefined4 *)(_UNK_0171caa8 + 0x171c390));
    func_0x01438628(*(undefined4 *)(_UNK_0171caac + 0x171c39c));
    func_0x01438628(*(undefined4 *)(_UNK_0171cab0 + 0x171c3a8));
    func_0x01438628(*(undefined4 *)(_UNK_0171cab4 + 0x171c3b4));
    func_0x01438628(*(undefined4 *)(_UNK_0171cab8 + 0x171c3c0));
    func_0x01438628(*(undefined4 *)(_UNK_0171cabc + 0x171c3cc));
    func_0x01438628(*(undefined4 *)(_UNK_0171cac0 + 0x171c3d8));
    func_0x01438628(*(undefined4 *)(_UNK_0171cac4 + 0x171c3e4));
    func_0x01438628(*(undefined4 *)(_UNK_0171cac8 + 0x171c3f0));
    func_0x01438628(*(undefined4 *)(_UNK_0171cacc + 0x171c3fc));
    func_0x01438628(*(undefined4 *)(_UNK_0171cad0 + 0x171c408));
    *pcVar8 = '\x01';
  }
  aiStack_28[0] = 0;
  iVar1 = func_0x02953fd4(0x8b49,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0171cad4 + 0x171c46c));
    func_0x01725bc0(iVar1,0);
    iVar3 = FUN_01714754(iVar9);
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
    iVar3 = func_0x024f1110(iVar3,uVar2,**(undefined4 **)(_UNK_0171cad8 + 0x171c4c4));
    if (iVar3 == 0) {
      iVar3 = FUN_01714754(iVar9);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x44);
      uVar2 = *(undefined4 *)(iVar10 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x024f1120(iVar3,uVar2,1,**(undefined4 **)(_UNK_0171cadc + 0x171c514));
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0171cae0 + 0x171c528));
      func_0x024eed9c(iVar3,**(undefined4 **)(_UNK_0171cae4 + 0x171c53c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar14 = (int *)(iVar1 + 8);
      *piVar14 = iVar3;
      func_0x014385cc(piVar14,iVar3);
      iVar9 = FUN_017158d8(iVar9);
      uVar2 = *(undefined4 *)(iVar10 + 8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      func_0x024f064c(iVar9,uVar2,aiStack_28,**(undefined4 **)(_UNK_0171cae8 + 0x171c598));
      iVar9 = aiStack_28[0];
      if (aiStack_28[0] == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar9 + 0x10) != 0) {
        iVar9 = 0;
        puVar12 = *(undefined4 **)(_UNK_0171caec + 0x171c5cc);
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
          uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0171caf0 + 0x171c66c));
          func_0x02ca3c70(uVar5,uVar2,uVar4,0,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar10 + 8);
          uVar11 = *(uint *)(iVar10 + 0xc);
          piVar7 = *(int **)(_UNK_0171caf4 + 0x171c6bc);
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
      iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_0171caf8 + 0x171c71c));
      func_0x024f1124(iVar9,**(undefined4 **)(_UNK_0171cafc + 0x171c730));
      piVar7 = (int *)(iVar1 + 0xc);
      *piVar7 = iVar9;
      func_0x014385cc(piVar7,iVar9);
      iVar9 = *(int *)(iVar1 + 8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar9 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_0171cb00 + 0x171c774) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = FUN_0171335c();
        if (iVar9 != 0) {
          func_0x01726f28(iVar9,0);
        }
        if (*(int *)(**(int **)(_UNK_0171cb04 + 0x171c7a4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x014e9518(**(undefined4 **)(_UNK_0171cb08 + 0x171c7c4));
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02bb3638(iVar9,0,0);
        iVar9 = 0;
        puVar12 = *(undefined4 **)(_UNK_0171cb0c + 0x171c7fc);
        piVar13 = *(int **)(_UNK_0171cb10 + 0x171c804);
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
          func_0x020257a4(iVar3,0x33d,uVar2,uVar4,0,0,0);
          iVar9 = iVar9 + 1;
        }
        if (*(int *)(**(int **)(_UNK_0171cb14 + 0x171c960) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x014e96a8(**(undefined4 **)(_UNK_0171cb18 + 0x171c97c));
        iVar10 = *piVar14;
        if (*(int *)(**(int **)(_UNK_0171cb1c + 0x171c990) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_0171cb20 + 0x171c9b0));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar3 + 0x10);
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0171cb24 + 0x171c9d0));
        func_0x0152e3ec(uVar2,iVar1,**(undefined4 **)(_UNK_0171cb28 + 0x171c9f0),0);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02b75870(iVar9,iVar10,uVar4,1,0x11d,0,0,0,0,0,0,0,uVar2,0,0);
        iVar9 = *piVar7;
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        return *(undefined4 *)(iVar9 + 8);
      }
    }
    piVar14 = *(int **)(_UNK_0171cb2c + 0x171c8f8);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar8 = (char *)(_UNK_0171cb30 + 0x171c914);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0171cb34 + 0x171c928));
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
    iVar1 = func_0x029540a4(0x8b49,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02884efc(iVar1,iVar9,iVar10,0);
  }
  return uVar2;
}

