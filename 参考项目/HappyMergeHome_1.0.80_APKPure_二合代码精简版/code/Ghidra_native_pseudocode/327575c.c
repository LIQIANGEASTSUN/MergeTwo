
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0328575c(int param_1)

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
  pcVar8 = (char *)(_UNK_0327e370 + 0x327dbd0);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0327e374 + 0x327dbe4));
    func_0x01438628(*(undefined4 *)(_UNK_0327e378 + 0x327dbf0));
    func_0x01438628(*(undefined4 *)(_UNK_0327e37c + 0x327dbfc));
    func_0x01438628(*(undefined4 *)(_UNK_0327e380 + 0x327dc08));
    func_0x01438628(*(undefined4 *)(_UNK_0327e384 + 0x327dc14));
    func_0x01438628(*(undefined4 *)(_UNK_0327e388 + 0x327dc20));
    func_0x01438628(*(undefined4 *)(_UNK_0327e38c + 0x327dc2c));
    func_0x01438628(*(undefined4 *)(_UNK_0327e390 + 0x327dc38));
    func_0x01438628(*(undefined4 *)(_UNK_0327e394 + 0x327dc44));
    func_0x01438628(*(undefined4 *)(_UNK_0327e398 + 0x327dc50));
    func_0x01438628(*(undefined4 *)(_UNK_0327e39c + 0x327dc5c));
    func_0x01438628(*(undefined4 *)(_UNK_0327e3a0 + 0x327dc68));
    func_0x01438628(*(undefined4 *)(_UNK_0327e3a4 + 0x327dc74));
    func_0x01438628(*(undefined4 *)(_UNK_0327e3a8 + 0x327dc80));
    func_0x01438628(*(undefined4 *)(_UNK_0327e3ac + 0x327dc8c));
    func_0x01438628(*(undefined4 *)(_UNK_0327e3b0 + 0x327dc98));
    func_0x01438628(*(undefined4 *)(_UNK_0327e3b4 + 0x327dca4));
    func_0x01438628(*(undefined4 *)(_UNK_0327e3b8 + 0x327dcb0));
    func_0x01438628(*(undefined4 *)(_UNK_0327e3bc + 0x327dcbc));
    func_0x01438628(*(undefined4 *)(_UNK_0327e3c0 + 0x327dcc8));
    func_0x01438628(*(undefined4 *)(_UNK_0327e3c4 + 0x327dcd4));
    func_0x01438628(*(undefined4 *)(_UNK_0327e3c8 + 0x327dce0));
    func_0x01438628(*(undefined4 *)(_UNK_0327e3cc + 0x327dcec));
    func_0x01438628(*(undefined4 *)(_UNK_0327e3d0 + 0x327dcf8));
    func_0x01438628(*(undefined4 *)(_UNK_0327e3d4 + 0x327dd04));
    func_0x01438628(*(undefined4 *)(_UNK_0327e3d8 + 0x327dd10));
    *pcVar8 = '\x01';
  }
  aiStack_28[0] = 0;
  iVar1 = func_0x02953fd4(0x8122,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0327e3dc + 0x327dd74));
    func_0x051b0d14(iVar1,0);
    iVar3 = FUN_03275bc8(iVar9);
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
    iVar3 = func_0x046b50c0(iVar3,uVar2,**(undefined4 **)(_UNK_0327e3e0 + 0x327ddcc));
    if (iVar3 == 0) {
      iVar3 = FUN_03275bc8(iVar9);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x44);
      uVar2 = *(undefined4 *)(iVar10 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x03b70700(iVar3,uVar2,1,**(undefined4 **)(_UNK_0327e3e4 + 0x327de1c));
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0327e3e8 + 0x327de30));
      func_0x04cfd1b4(iVar3,**(undefined4 **)(_UNK_0327e3ec + 0x327de44));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar14 = (int *)(iVar1 + 8);
      *piVar14 = iVar3;
      func_0x014385cc(piVar14,iVar3);
      iVar9 = FUN_03276d4c(iVar9);
      uVar2 = *(undefined4 *)(iVar10 + 8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      func_0x046ce3e4(iVar9,uVar2,aiStack_28,**(undefined4 **)(_UNK_0327e3f0 + 0x327dea0));
      iVar9 = aiStack_28[0];
      if (aiStack_28[0] == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar9 + 0x10) != 0) {
        iVar9 = 0;
        puVar12 = *(undefined4 **)(_UNK_0327e3f4 + 0x327ded4);
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
          uVar2 = func_0x04cd26d0(iVar3,iVar9,*puVar12);
          iVar3 = aiStack_28[0];
          if (aiStack_28[0] == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x14);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar4 = func_0x04cd26d0(iVar3,iVar9,*puVar12);
          uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0327e3f8 + 0x327df74));
          func_0x02ca3c70(uVar5,uVar2,uVar4,0,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar10 + 8);
          uVar11 = *(uint *)(iVar10 + 0xc);
          piVar7 = *(int **)(_UNK_0327e3fc + 0x327dfc4);
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
            func_0x04cfda38(iVar10,uVar5,
                            *(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38));
          }
          iVar9 = iVar9 + 1;
        }
      }
      iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_0327e400 + 0x327e024));
      func_0x03bbd054(iVar9,**(undefined4 **)(_UNK_0327e404 + 0x327e038));
      piVar7 = (int *)(iVar1 + 0xc);
      *piVar7 = iVar9;
      func_0x014385cc(piVar7,iVar9);
      iVar9 = *(int *)(iVar1 + 8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar9 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_0327e408 + 0x327e07c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = FUN_032747d0();
        if (iVar9 != 0) {
          func_0x0329d0f0(iVar9,0);
        }
        if (*(int *)(**(int **)(_UNK_0327e40c + 0x327e0ac) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x04e4a028(**(undefined4 **)(_UNK_0327e410 + 0x327e0cc));
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02bb3638(iVar9,0,0);
        iVar9 = 0;
        puVar12 = *(undefined4 **)(_UNK_0327e414 + 0x327e104);
        piVar13 = *(int **)(_UNK_0327e418 + 0x327e10c);
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
          iVar10 = func_0x04cfd760(iVar10,iVar9,*puVar12);
          if (*(int *)(*piVar13 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          if (iVar10 == 0) {
            func_0x014388e4();
            uVar2 = func_0x0515c4b0(8,0);
            func_0x014388e4();
          }
          else {
            uVar2 = func_0x0515c4b0(iVar10 + 8,0);
          }
          uVar4 = func_0x0515c4b0(iVar10 + 0xc,0);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x020257a4(iVar3,0x2b8,uVar2,uVar4,0,0,0);
          iVar9 = iVar9 + 1;
        }
        if (*(int *)(**(int **)(_UNK_0327e41c + 0x327e268) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x03b2c734(**(undefined4 **)(_UNK_0327e420 + 0x327e284));
        iVar10 = *piVar14;
        if (*(int *)(**(int **)(_UNK_0327e424 + 0x327e298) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0327e428 + 0x327e2b8));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar3 + 0x10);
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0327e42c + 0x327e2d8));
        func_0x05096384(uVar2,iVar1,**(undefined4 **)(_UNK_0327e430 + 0x327e2f8),0);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02b75870(iVar9,iVar10,uVar4,1,0xc5,0,0,0,0,0,0,0,uVar2,0,0);
        iVar9 = *piVar7;
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        return *(undefined4 *)(iVar9 + 8);
      }
    }
    piVar14 = *(int **)(_UNK_0327e434 + 0x327e200);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar8 = (char *)(_UNK_0327e438 + 0x327e21c);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0327e43c + 0x327e230));
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
    iVar1 = func_0x029540a4(0x8122,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02884efc(iVar1,iVar9,iVar10,0);
  }
  return uVar2;
}

