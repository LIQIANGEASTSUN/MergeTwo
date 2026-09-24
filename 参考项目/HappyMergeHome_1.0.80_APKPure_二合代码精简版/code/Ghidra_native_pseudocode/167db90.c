
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0168db90(int param_1)

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
  pcVar8 = (char *)(_UNK_01684a64 + 0x16842c4);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01684a68 + 0x16842d8),iVar10,0);
    func_0x01438628(*(undefined4 *)(_UNK_01684a6c + 0x16842e4));
    func_0x01438628(*(undefined4 *)(_UNK_01684a70 + 0x16842f0));
    func_0x01438628(*(undefined4 *)(_UNK_01684a74 + 0x16842fc));
    func_0x01438628(*(undefined4 *)(_UNK_01684a78 + 0x1684308));
    func_0x01438628(*(undefined4 *)(_UNK_01684a7c + 0x1684314));
    func_0x01438628(*(undefined4 *)(_UNK_01684a80 + 0x1684320));
    func_0x01438628(*(undefined4 *)(_UNK_01684a84 + 0x168432c));
    func_0x01438628(*(undefined4 *)(_UNK_01684a88 + 0x1684338));
    func_0x01438628(*(undefined4 *)(_UNK_01684a8c + 0x1684344));
    func_0x01438628(*(undefined4 *)(_UNK_01684a90 + 0x1684350));
    func_0x01438628(*(undefined4 *)(_UNK_01684a94 + 0x168435c));
    func_0x01438628(*(undefined4 *)(_UNK_01684a98 + 0x1684368));
    func_0x01438628(*(undefined4 *)(_UNK_01684a9c + 0x1684374));
    func_0x01438628(*(undefined4 *)(_UNK_01684aa0 + 0x1684380));
    func_0x01438628(*(undefined4 *)(_UNK_01684aa4 + 0x168438c));
    func_0x01438628(*(undefined4 *)(_UNK_01684aa8 + 0x1684398));
    func_0x01438628(*(undefined4 *)(_UNK_01684aac + 0x16843a4));
    func_0x01438628(*(undefined4 *)(_UNK_01684ab0 + 0x16843b0));
    func_0x01438628(*(undefined4 *)(_UNK_01684ab4 + 0x16843bc));
    func_0x01438628(*(undefined4 *)(_UNK_01684ab8 + 0x16843c8));
    func_0x01438628(*(undefined4 *)(_UNK_01684abc + 0x16843d4));
    func_0x01438628(*(undefined4 *)(_UNK_01684ac0 + 0x16843e0));
    func_0x01438628(*(undefined4 *)(_UNK_01684ac4 + 0x16843ec));
    func_0x01438628(*(undefined4 *)(_UNK_01684ac8 + 0x16843f8));
    func_0x01438628(*(undefined4 *)(_UNK_01684acc + 0x1684404));
    *pcVar8 = '\x01';
  }
  aiStack_28[0] = 0;
  iVar1 = func_0x02953fd4(0x8764,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01684ad0 + 0x1684468));
    func_0x0168dbbc(iVar1,0);
    iVar3 = FUN_0167c750(iVar9);
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
    iVar3 = func_0x024f1110(iVar3,uVar2,**(undefined4 **)(_UNK_01684ad4 + 0x16844c0));
    if (iVar3 == 0) {
      iVar3 = FUN_0167c750(iVar9);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x44);
      uVar2 = *(undefined4 *)(iVar10 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x024f1120(iVar3,uVar2,1,**(undefined4 **)(_UNK_01684ad8 + 0x1684510));
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01684adc + 0x1684524));
      func_0x024eed9c(iVar3,**(undefined4 **)(_UNK_01684ae0 + 0x1684538));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar14 = (int *)(iVar1 + 8);
      *piVar14 = iVar3;
      func_0x014385cc(piVar14,iVar3);
      iVar9 = FUN_0167d8d4(iVar9);
      uVar2 = *(undefined4 *)(iVar10 + 8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      func_0x024f064c(iVar9,uVar2,aiStack_28,**(undefined4 **)(_UNK_01684ae4 + 0x1684594));
      iVar9 = aiStack_28[0];
      if (aiStack_28[0] == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar9 + 0x10) != 0) {
        iVar9 = 0;
        puVar12 = *(undefined4 **)(_UNK_01684ae8 + 0x16845c8);
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
          uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_01684aec + 0x1684668));
          func_0x02ca3c70(uVar5,uVar2,uVar4,0,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar10 + 8);
          uVar11 = *(uint *)(iVar10 + 0xc);
          piVar7 = *(int **)(_UNK_01684af0 + 0x16846b8);
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
      iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_01684af4 + 0x1684718));
      func_0x024f1124(iVar9,**(undefined4 **)(_UNK_01684af8 + 0x168472c));
      piVar7 = (int *)(iVar1 + 0xc);
      *piVar7 = iVar9;
      func_0x014385cc(piVar7,iVar9);
      iVar9 = *(int *)(iVar1 + 8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar9 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_01684afc + 0x1684770) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = FUN_0167b358();
        if (iVar9 != 0) {
          func_0x0168ef24(iVar9,0);
        }
        if (*(int *)(**(int **)(_UNK_01684b00 + 0x16847a0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x014e9518(**(undefined4 **)(_UNK_01684b04 + 0x16847c0));
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02bb3638(iVar9,0,0);
        iVar9 = 0;
        puVar12 = *(undefined4 **)(_UNK_01684b08 + 0x16847f8);
        piVar13 = *(int **)(_UNK_01684b0c + 0x1684800);
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
          func_0x020257a4(iVar3,0x329,uVar2,uVar4,0,0,0);
          iVar9 = iVar9 + 1;
        }
        if (*(int *)(**(int **)(_UNK_01684b10 + 0x168495c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x014e96a8(**(undefined4 **)(_UNK_01684b14 + 0x1684978));
        iVar10 = *piVar14;
        if (*(int *)(**(int **)(_UNK_01684b18 + 0x168498c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01684b1c + 0x16849ac));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar3 + 0x10);
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_01684b20 + 0x16849cc));
        func_0x0152e3ec(uVar2,iVar1,**(undefined4 **)(_UNK_01684b24 + 0x16849ec),0);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02b75870(iVar9,iVar10,uVar4,1,0x112,0,0,0,0,0,0,0,uVar2,0,0);
        iVar9 = *piVar7;
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        return *(undefined4 *)(iVar9 + 8);
      }
    }
    piVar14 = *(int **)(_UNK_01684b28 + 0x16848f4);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar8 = (char *)(_UNK_01684b2c + 0x1684910);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_01684b30 + 0x1684924));
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
    iVar1 = func_0x029540a4(0x8764,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02884efc(iVar1,iVar9,iVar10,0);
  }
  return uVar2;
}

