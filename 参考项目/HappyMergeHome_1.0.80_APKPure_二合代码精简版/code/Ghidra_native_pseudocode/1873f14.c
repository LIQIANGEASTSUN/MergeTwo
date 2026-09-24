
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01883f14(int param_1)

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
  pcVar8 = (char *)(_UNK_0187c490 + 0x187bcf0);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0187c494 + 0x187bd04),iVar10,0);
    func_0x01438628(*(undefined4 *)(_UNK_0187c498 + 0x187bd10));
    func_0x01438628(*(undefined4 *)(_UNK_0187c49c + 0x187bd1c));
    func_0x01438628(*(undefined4 *)(_UNK_0187c4a0 + 0x187bd28));
    func_0x01438628(*(undefined4 *)(_UNK_0187c4a4 + 0x187bd34));
    func_0x01438628(*(undefined4 *)(_UNK_0187c4a8 + 0x187bd40));
    func_0x01438628(*(undefined4 *)(_UNK_0187c4ac + 0x187bd4c));
    func_0x01438628(*(undefined4 *)(_UNK_0187c4b0 + 0x187bd58));
    func_0x01438628(*(undefined4 *)(_UNK_0187c4b4 + 0x187bd64));
    func_0x01438628(*(undefined4 *)(_UNK_0187c4b8 + 0x187bd70));
    func_0x01438628(*(undefined4 *)(_UNK_0187c4bc + 0x187bd7c));
    func_0x01438628(*(undefined4 *)(_UNK_0187c4c0 + 0x187bd88));
    func_0x01438628(*(undefined4 *)(_UNK_0187c4c4 + 0x187bd94));
    func_0x01438628(*(undefined4 *)(_UNK_0187c4c8 + 0x187bda0));
    func_0x01438628(*(undefined4 *)(_UNK_0187c4cc + 0x187bdac));
    func_0x01438628(*(undefined4 *)(_UNK_0187c4d0 + 0x187bdb8));
    func_0x01438628(*(undefined4 *)(_UNK_0187c4d4 + 0x187bdc4));
    func_0x01438628(*(undefined4 *)(_UNK_0187c4d8 + 0x187bdd0));
    func_0x01438628(*(undefined4 *)(_UNK_0187c4dc + 0x187bddc));
    func_0x01438628(*(undefined4 *)(_UNK_0187c4e0 + 0x187bde8));
    func_0x01438628(*(undefined4 *)(_UNK_0187c4e4 + 0x187bdf4));
    func_0x01438628(*(undefined4 *)(_UNK_0187c4e8 + 0x187be00));
    func_0x01438628(*(undefined4 *)(_UNK_0187c4ec + 0x187be0c));
    func_0x01438628(*(undefined4 *)(_UNK_0187c4f0 + 0x187be18));
    func_0x01438628(*(undefined4 *)(_UNK_0187c4f4 + 0x187be24));
    func_0x01438628(*(undefined4 *)(_UNK_0187c4f8 + 0x187be30));
    *pcVar8 = '\x01';
  }
  aiStack_28[0] = 0;
  iVar1 = func_0x02953fd4(0x9388,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0187c4fc + 0x187be94));
    func_0x01883f40(iVar1,0);
    iVar3 = FUN_01873864(iVar9);
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
    iVar3 = func_0x024f1110(iVar3,uVar2,**(undefined4 **)(_UNK_0187c500 + 0x187beec));
    if (iVar3 == 0) {
      iVar3 = FUN_01873864(iVar9);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x44);
      uVar2 = *(undefined4 *)(iVar10 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x024f1120(iVar3,uVar2,1,**(undefined4 **)(_UNK_0187c504 + 0x187bf3c));
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0187c508 + 0x187bf50));
      func_0x024eed9c(iVar3,**(undefined4 **)(_UNK_0187c50c + 0x187bf64));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar14 = (int *)(iVar1 + 8);
      *piVar14 = iVar3;
      func_0x014385cc(piVar14,iVar3);
      iVar9 = FUN_018749e8(iVar9);
      uVar2 = *(undefined4 *)(iVar10 + 8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      func_0x024f064c(iVar9,uVar2,aiStack_28,**(undefined4 **)(_UNK_0187c510 + 0x187bfc0));
      iVar9 = aiStack_28[0];
      if (aiStack_28[0] == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar9 + 0x10) != 0) {
        iVar9 = 0;
        puVar12 = *(undefined4 **)(_UNK_0187c514 + 0x187bff4);
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
          uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0187c518 + 0x187c094));
          func_0x02ca3c70(uVar5,uVar2,uVar4,0,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar10 + 8);
          uVar11 = *(uint *)(iVar10 + 0xc);
          piVar7 = *(int **)(_UNK_0187c51c + 0x187c0e4);
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
      iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_0187c520 + 0x187c144));
      func_0x024f1124(iVar9,**(undefined4 **)(_UNK_0187c524 + 0x187c158));
      piVar7 = (int *)(iVar1 + 0xc);
      *piVar7 = iVar9;
      func_0x014385cc(piVar7,iVar9);
      iVar9 = *(int *)(iVar1 + 8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar9 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_0187c528 + 0x187c19c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = FUN_018725d4();
        if (iVar9 != 0) {
          func_0x018852c4(iVar9,0);
        }
        if (*(int *)(**(int **)(_UNK_0187c52c + 0x187c1cc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x014e9518(**(undefined4 **)(_UNK_0187c530 + 0x187c1ec));
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02bb3638(iVar9,0,0);
        iVar9 = 0;
        puVar12 = *(undefined4 **)(_UNK_0187c534 + 0x187c224);
        piVar13 = *(int **)(_UNK_0187c538 + 0x187c22c);
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
          func_0x020257a4(iVar3,0x286,uVar2,uVar4,0,0,0);
          iVar9 = iVar9 + 1;
        }
        if (*(int *)(**(int **)(_UNK_0187c53c + 0x187c388) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x014e96a8(**(undefined4 **)(_UNK_0187c540 + 0x187c3a4));
        iVar10 = *piVar14;
        if (*(int *)(**(int **)(_UNK_0187c544 + 0x187c3b8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_0187c548 + 0x187c3d8));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar3 + 0x10);
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0187c54c + 0x187c3f8));
        func_0x0152e3ec(uVar2,iVar1,**(undefined4 **)(_UNK_0187c550 + 0x187c418),0);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02b75870(iVar9,iVar10,uVar4,1,0xab,0,0,0,0,0,0,0,uVar2,0,0);
        iVar9 = *piVar7;
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        return *(undefined4 *)(iVar9 + 8);
      }
    }
    piVar14 = *(int **)(_UNK_0187c554 + 0x187c320);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar8 = (char *)(_UNK_0187c558 + 0x187c33c);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0187c55c + 0x187c350));
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
    iVar1 = func_0x029540a4(0x9388,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02884efc(iVar1,iVar9,iVar10,0);
  }
  return uVar2;
}

