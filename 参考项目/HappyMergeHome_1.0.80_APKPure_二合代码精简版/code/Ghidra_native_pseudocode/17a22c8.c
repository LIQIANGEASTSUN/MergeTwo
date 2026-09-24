
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_017b22c8(int param_1)

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
  pcVar8 = (char *)(_UNK_017abc38 + 0x17ab498);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017abc3c + 0x17ab4ac));
    func_0x01438628(*(undefined4 *)(_UNK_017abc40 + 0x17ab4b8));
    func_0x01438628(*(undefined4 *)(_UNK_017abc44 + 0x17ab4c4));
    func_0x01438628(*(undefined4 *)(_UNK_017abc48 + 0x17ab4d0));
    func_0x01438628(*(undefined4 *)(_UNK_017abc4c + 0x17ab4dc));
    func_0x01438628(*(undefined4 *)(_UNK_017abc50 + 0x17ab4e8));
    func_0x01438628(*(undefined4 *)(_UNK_017abc54 + 0x17ab4f4));
    func_0x01438628(*(undefined4 *)(_UNK_017abc58 + 0x17ab500));
    func_0x01438628(*(undefined4 *)(_UNK_017abc5c + 0x17ab50c));
    func_0x01438628(*(undefined4 *)(_UNK_017abc60 + 0x17ab518));
    func_0x01438628(*(undefined4 *)(_UNK_017abc64 + 0x17ab524));
    func_0x01438628(*(undefined4 *)(_UNK_017abc68 + 0x17ab530));
    func_0x01438628(*(undefined4 *)(_UNK_017abc6c + 0x17ab53c));
    func_0x01438628(*(undefined4 *)(_UNK_017abc70 + 0x17ab548));
    func_0x01438628(*(undefined4 *)(_UNK_017abc74 + 0x17ab554));
    func_0x01438628(*(undefined4 *)(_UNK_017abc78 + 0x17ab560));
    func_0x01438628(*(undefined4 *)(_UNK_017abc7c + 0x17ab56c));
    func_0x01438628(*(undefined4 *)(_UNK_017abc80 + 0x17ab578));
    func_0x01438628(*(undefined4 *)(_UNK_017abc84 + 0x17ab584));
    func_0x01438628(*(undefined4 *)(_UNK_017abc88 + 0x17ab590));
    func_0x01438628(*(undefined4 *)(_UNK_017abc8c + 0x17ab59c));
    func_0x01438628(*(undefined4 *)(_UNK_017abc90 + 0x17ab5a8));
    func_0x01438628(*(undefined4 *)(_UNK_017abc94 + 0x17ab5b4));
    func_0x01438628(*(undefined4 *)(_UNK_017abc98 + 0x17ab5c0));
    func_0x01438628(*(undefined4 *)(_UNK_017abc9c + 0x17ab5cc));
    func_0x01438628(*(undefined4 *)(_UNK_017abca0 + 0x17ab5d8));
    *pcVar8 = '\x01';
  }
  aiStack_28[0] = 0;
  iVar1 = func_0x02953fd4(0x8e47,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_017abca4 + 0x17ab63c));
    func_0x024eeca8(iVar1,0);
    iVar3 = FUN_017a2fe8(iVar9);
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
    iVar3 = func_0x024f1110(iVar3,uVar2,**(undefined4 **)(_UNK_017abca8 + 0x17ab694));
    if (iVar3 == 0) {
      iVar3 = FUN_017a2fe8(iVar9);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x44);
      uVar2 = *(undefined4 *)(iVar10 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x024f1120(iVar3,uVar2,1,**(undefined4 **)(_UNK_017abcac + 0x17ab6e4));
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_017abcb0 + 0x17ab6f8));
      func_0x024eed9c(iVar3,**(undefined4 **)(_UNK_017abcb4 + 0x17ab70c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar14 = (int *)(iVar1 + 8);
      *piVar14 = iVar3;
      func_0x014385cc(piVar14,iVar3);
      iVar9 = FUN_017a416c(iVar9);
      uVar2 = *(undefined4 *)(iVar10 + 8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      func_0x024f064c(iVar9,uVar2,aiStack_28,**(undefined4 **)(_UNK_017abcb8 + 0x17ab768));
      iVar9 = aiStack_28[0];
      if (aiStack_28[0] == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar9 + 0x10) != 0) {
        iVar9 = 0;
        puVar12 = *(undefined4 **)(_UNK_017abcbc + 0x17ab79c);
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
          uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_017abcc0 + 0x17ab83c));
          func_0x02ca3c70(uVar5,uVar2,uVar4,0,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar10 + 8);
          uVar11 = *(uint *)(iVar10 + 0xc);
          piVar7 = *(int **)(_UNK_017abcc4 + 0x17ab88c);
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
      iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_017abcc8 + 0x17ab8ec));
      func_0x024f1124(iVar9,**(undefined4 **)(_UNK_017abccc + 0x17ab900));
      piVar7 = (int *)(iVar1 + 0xc);
      *piVar7 = iVar9;
      func_0x014385cc(piVar7,iVar9);
      iVar9 = *(int *)(iVar1 + 8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar9 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_017abcd0 + 0x17ab944) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = FUN_017a1d58();
        if (iVar9 != 0) {
          func_0x017b3604(iVar9,0);
        }
        if (*(int *)(**(int **)(_UNK_017abcd4 + 0x17ab974) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x014e9518(**(undefined4 **)(_UNK_017abcd8 + 0x17ab994));
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02bb3638(iVar9,0,0);
        iVar9 = 0;
        puVar12 = *(undefined4 **)(_UNK_017abcdc + 0x17ab9cc);
        piVar13 = *(int **)(_UNK_017abce0 + 0x17ab9d4);
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
          func_0x020257a4(iVar3,0x2a1,uVar2,uVar4,0,0,0);
          iVar9 = iVar9 + 1;
        }
        if (*(int *)(**(int **)(_UNK_017abce4 + 0x17abb30) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x014e96a8(**(undefined4 **)(_UNK_017abce8 + 0x17abb4c));
        iVar10 = *piVar14;
        if (*(int *)(**(int **)(_UNK_017abcec + 0x17abb60) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_017abcf0 + 0x17abb80));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar3 + 0x10);
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_017abcf4 + 0x17abba0));
        func_0x0152e3ec(uVar2,iVar1,**(undefined4 **)(_UNK_017abcf8 + 0x17abbc0),0);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02b75870(iVar9,iVar10,uVar4,1,0xbb,0,0,0,0,0,0,0,uVar2,0,0);
        iVar9 = *piVar7;
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        return *(undefined4 *)(iVar9 + 8);
      }
    }
    piVar14 = *(int **)(_UNK_017abcfc + 0x17abac8);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar8 = (char *)(_UNK_017abd00 + 0x17abae4);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_017abd04 + 0x17abaf8));
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
    iVar1 = func_0x029540a4(0x8e47,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02884efc(iVar1,iVar9,iVar10,0);
  }
  return uVar2;
}

