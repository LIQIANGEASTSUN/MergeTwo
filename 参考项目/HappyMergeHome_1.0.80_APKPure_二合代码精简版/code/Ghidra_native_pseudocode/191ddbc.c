
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0192ddbc(undefined4 param_1,int param_2)

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
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_0192e578 + 0x192ddd8);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0192e57c + 0x192ddec));
    func_0x01438628(*(undefined4 *)(_UNK_0192e580 + 0x192ddf8));
    func_0x01438628(*(undefined4 *)(_UNK_0192e584 + 0x192de04));
    func_0x01438628(*(undefined4 *)(_UNK_0192e588 + 0x192de10));
    func_0x01438628(*(undefined4 *)(_UNK_0192e58c + 0x192de1c));
    func_0x01438628(*(undefined4 *)(_UNK_0192e590 + 0x192de28));
    func_0x01438628(*(undefined4 *)(_UNK_0192e594 + 0x192de34));
    func_0x01438628(*(undefined4 *)(_UNK_0192e598 + 0x192de40));
    func_0x01438628(*(undefined4 *)(_UNK_0192e59c + 0x192de4c));
    func_0x01438628(*(undefined4 *)(_UNK_0192e5a0 + 0x192de58));
    func_0x01438628(*(undefined4 *)(_UNK_0192e5a4 + 0x192de64));
    func_0x01438628(*(undefined4 *)(_UNK_0192e5a8 + 0x192de70));
    func_0x01438628(*(undefined4 *)(_UNK_0192e5ac + 0x192de7c));
    func_0x01438628(*(undefined4 *)(_UNK_0192e5b0 + 0x192de88));
    func_0x01438628(*(undefined4 *)(_UNK_0192e5b4 + 0x192de94));
    func_0x01438628(*(undefined4 *)(_UNK_0192e5b8 + 0x192dea0));
    func_0x01438628(*(undefined4 *)(_UNK_0192e5bc + 0x192deac));
    func_0x01438628(*(undefined4 *)(_UNK_0192e5c0 + 0x192deb8));
    func_0x01438628(*(undefined4 *)(_UNK_0192e5c4 + 0x192dec4));
    func_0x01438628(*(undefined4 *)(_UNK_0192e5c8 + 0x192ded0));
    func_0x01438628(*(undefined4 *)(_UNK_0192e5cc + 0x192dedc));
    func_0x01438628(*(undefined4 *)(_UNK_0192e5d0 + 0x192dee8));
    func_0x01438628(*(undefined4 *)(_UNK_0192e5d4 + 0x192def4));
    func_0x01438628(*(undefined4 *)(_UNK_0192e5d8 + 0x192df00));
    func_0x01438628(*(undefined4 *)(_UNK_0192e5dc + 0x192df0c));
    func_0x01438628(*(undefined4 *)(_UNK_0192e5e0 + 0x192df18));
    *pcVar8 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x02953fd4(0x9767,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0192e5e4 + 0x192df7c));
    func_0x019376d0(iVar1,0);
    iVar3 = FUN_01926264(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x44);
    if (param_2 == 0) {
      func_0x014388e4();
    }
    uVar2 = *(undefined4 *)(param_2 + 8);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x024f1110(iVar3,uVar2,**(undefined4 **)(_UNK_0192e5e8 + 0x192dfd4));
    if (iVar3 == 0) {
      iVar3 = FUN_01926264(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x44);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x024f1120(iVar3,uVar2,1,**(undefined4 **)(_UNK_0192e5ec + 0x192e024));
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0192e5f0 + 0x192e038));
      func_0x024eed9c(iVar3,**(undefined4 **)(_UNK_0192e5f4 + 0x192e04c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar14 = (int *)(iVar1 + 8);
      *piVar14 = iVar3;
      func_0x014385cc(piVar14,iVar3);
      iVar3 = FUN_019273e8(param_1);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x024f064c(iVar3,uVar2,&iStack_28,**(undefined4 **)(_UNK_0192e5f8 + 0x192e0a8));
      iVar3 = iStack_28;
      if (iStack_28 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0x10) != 0) {
        iVar3 = 0;
        puVar12 = *(undefined4 **)(_UNK_0192e5fc + 0x192e0dc);
        while( true ) {
          iVar9 = iStack_28;
          if (iStack_28 == 0) {
            func_0x014388e4();
          }
          iVar9 = *(int *)(iVar9 + 0x10);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar10 = iStack_28;
          if (*(int *)(iVar9 + 0xc) <= iVar3) break;
          iVar9 = *piVar14;
          if (iStack_28 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar10 + 0x10);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          uVar2 = func_0x024f0530(iVar10,iVar3,*puVar12);
          iVar10 = iStack_28;
          if (iStack_28 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar10 + 0x14);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          uVar4 = func_0x024f0530(iVar10,iVar3,*puVar12);
          uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0192e600 + 0x192e17c));
          func_0x02ca3c70(uVar5,uVar2,uVar4,0,0);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar9 + 8);
          uVar11 = *(uint *)(iVar9 + 0xc);
          piVar7 = *(int **)(_UNK_0192e604 + 0x192e1cc);
          *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
          iVar15 = *piVar7;
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          if (uVar11 < *(uint *)(iVar10 + 0xc)) {
            *(uint *)(iVar9 + 0xc) = uVar11 + 1;
            puVar6 = (undefined4 *)(iVar10 + uVar11 * 4 + 0x10);
            *puVar6 = uVar5;
            func_0x014385cc(puVar6,uVar5);
          }
          else {
            func_0x0152874c(iVar9,uVar5,
                            *(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38));
          }
          iVar3 = iVar3 + 1;
        }
      }
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0192e608 + 0x192e22c));
      func_0x024f1124(iVar3,**(undefined4 **)(_UNK_0192e60c + 0x192e240));
      piVar7 = (int *)(iVar1 + 0xc);
      *piVar7 = iVar3;
      func_0x014385cc(piVar7,iVar3);
      iVar3 = *(int *)(iVar1 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar3 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_0192e610 + 0x192e284) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = FUN_01924e6c();
        if (iVar3 != 0) {
          func_0x01938a38(iVar3,0);
        }
        if (*(int *)(**(int **)(_UNK_0192e614 + 0x192e2b4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_0192e618 + 0x192e2d4));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02bb3638(iVar3,0,0);
        iVar3 = 0;
        puVar12 = *(undefined4 **)(_UNK_0192e61c + 0x192e30c);
        piVar13 = *(int **)(_UNK_0192e620 + 0x192e314);
        while( true ) {
          iVar9 = *piVar14;
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar9 + 0xc) <= iVar3) break;
          iVar9 = *piVar14;
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar9 = func_0x0152983c(iVar9,iVar3,*puVar12);
          if (*(int *)(*piVar13 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar10 = func_0x0202346c(0);
          if (iVar9 == 0) {
            func_0x014388e4();
            uVar2 = func_0x01524ffc(8,0);
            func_0x014388e4();
          }
          else {
            uVar2 = func_0x01524ffc(iVar9 + 8,0);
          }
          uVar4 = func_0x01524ffc(iVar9 + 0xc,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          func_0x020257a4(iVar10,0x351,uVar2,uVar4,0,0,0);
          iVar3 = iVar3 + 1;
        }
        if (*(int *)(**(int **)(_UNK_0192e624 + 0x192e470) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e96a8(**(undefined4 **)(_UNK_0192e628 + 0x192e48c));
        iVar9 = *piVar14;
        if (*(int *)(**(int **)(_UNK_0192e62c + 0x192e4a0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar10 = func_0x014e9518(**(undefined4 **)(_UNK_0192e630 + 0x192e4c0));
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar10 + 0x10);
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0192e634 + 0x192e4e0));
        func_0x0152e3ec(uVar2,iVar1,**(undefined4 **)(_UNK_0192e638 + 0x192e500),0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02b75870(iVar3,iVar9,uVar4,1,0x129,0,0,0,0,0,0,0,uVar2,0,0);
        iVar1 = *piVar7;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        return *(undefined4 *)(iVar1 + 8);
      }
    }
    piVar14 = *(int **)(_UNK_0192e63c + 0x192e408);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar8 = (char *)(_UNK_0192e640 + 0x192e424);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0192e644 + 0x192e438));
      *pcVar8 = '\x01';
    }
    iVar1 = *piVar14;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar14;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x18);
  }
  else {
    iVar1 = func_0x029540a4(0x9767,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02884efc(iVar1,param_1,param_2,0);
  }
  return uVar2;
}

