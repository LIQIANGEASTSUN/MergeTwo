
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0177b0dc(int param_1)

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
  pcVar8 = (char *)(_UNK_01757814 + 0x1757074);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01757818 + 0x1757088),iVar10,0);
    func_0x01438628(*(undefined4 *)(_UNK_0175781c + 0x1757094));
    func_0x01438628(*(undefined4 *)(_UNK_01757820 + 0x17570a0));
    func_0x01438628(*(undefined4 *)(_UNK_01757824 + 0x17570ac));
    func_0x01438628(*(undefined4 *)(_UNK_01757828 + 0x17570b8));
    func_0x01438628(*(undefined4 *)(_UNK_0175782c + 0x17570c4));
    func_0x01438628(*(undefined4 *)(_UNK_01757830 + 0x17570d0));
    func_0x01438628(*(undefined4 *)(_UNK_01757834 + 0x17570dc));
    func_0x01438628(*(undefined4 *)(_UNK_01757838 + 0x17570e8));
    func_0x01438628(*(undefined4 *)(_UNK_0175783c + 0x17570f4));
    func_0x01438628(*(undefined4 *)(_UNK_01757840 + 0x1757100));
    func_0x01438628(*(undefined4 *)(_UNK_01757844 + 0x175710c));
    func_0x01438628(*(undefined4 *)(_UNK_01757848 + 0x1757118));
    func_0x01438628(*(undefined4 *)(_UNK_0175784c + 0x1757124));
    func_0x01438628(*(undefined4 *)(_UNK_01757850 + 0x1757130));
    func_0x01438628(*(undefined4 *)(_UNK_01757854 + 0x175713c));
    func_0x01438628(*(undefined4 *)(_UNK_01757858 + 0x1757148));
    func_0x01438628(*(undefined4 *)(_UNK_0175785c + 0x1757154));
    func_0x01438628(*(undefined4 *)(_UNK_01757860 + 0x1757160));
    func_0x01438628(*(undefined4 *)(_UNK_01757864 + 0x175716c));
    func_0x01438628(*(undefined4 *)(_UNK_01757868 + 0x1757178));
    func_0x01438628(*(undefined4 *)(_UNK_0175786c + 0x1757184));
    func_0x01438628(*(undefined4 *)(_UNK_01757870 + 0x1757190));
    func_0x01438628(*(undefined4 *)(_UNK_01757874 + 0x175719c));
    func_0x01438628(*(undefined4 *)(_UNK_01757878 + 0x17571a8));
    func_0x01438628(*(undefined4 *)(_UNK_0175787c + 0x17571b4));
    *pcVar8 = '\x01';
  }
  aiStack_28[0] = 0;
  iVar1 = func_0x02953fd4(0x8cc0,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01757880 + 0x1757218));
    func_0x0177b108(iVar1,0);
    iVar3 = FUN_0174e5a0(iVar9);
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
    iVar3 = func_0x024f1110(iVar3,uVar2,**(undefined4 **)(_UNK_01757884 + 0x1757270));
    if (iVar3 == 0) {
      iVar3 = FUN_0174e5a0(iVar9);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x44);
      uVar2 = *(undefined4 *)(iVar10 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x024f1120(iVar3,uVar2,1,**(undefined4 **)(_UNK_01757888 + 0x17572c0));
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0175788c + 0x17572d4));
      func_0x024eed9c(iVar3,**(undefined4 **)(_UNK_01757890 + 0x17572e8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar14 = (int *)(iVar1 + 8);
      *piVar14 = iVar3;
      func_0x014385cc(piVar14,iVar3);
      iVar9 = FUN_0174f724(iVar9);
      uVar2 = *(undefined4 *)(iVar10 + 8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      func_0x024f064c(iVar9,uVar2,aiStack_28,**(undefined4 **)(_UNK_01757894 + 0x1757344));
      iVar9 = aiStack_28[0];
      if (aiStack_28[0] == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar9 + 0x10) != 0) {
        iVar9 = 0;
        puVar12 = *(undefined4 **)(_UNK_01757898 + 0x1757378);
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
          uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0175789c + 0x1757418));
          func_0x02ca3c70(uVar5,uVar2,uVar4,0,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar10 + 8);
          uVar11 = *(uint *)(iVar10 + 0xc);
          piVar7 = *(int **)(_UNK_017578a0 + 0x1757468);
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
      iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_017578a4 + 0x17574c8));
      func_0x024f1124(iVar9,**(undefined4 **)(_UNK_017578a8 + 0x17574dc));
      piVar7 = (int *)(iVar1 + 0xc);
      *piVar7 = iVar9;
      func_0x014385cc(piVar7,iVar9);
      iVar9 = *(int *)(iVar1 + 8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar9 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_017578ac + 0x1757520) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = FUN_0174c20c();
        if (iVar9 != 0) {
          func_0x0177c424(iVar9,0);
        }
        if (*(int *)(**(int **)(_UNK_017578b0 + 0x1757550) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x014e9518(**(undefined4 **)(_UNK_017578b4 + 0x1757570));
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02bb3638(iVar9,0,0);
        iVar9 = 0;
        puVar12 = *(undefined4 **)(_UNK_017578b8 + 0x17575a8);
        piVar13 = *(int **)(_UNK_017578bc + 0x17575b0);
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
          func_0x020257a4(iVar3,0x322,uVar2,uVar4,0,0,0);
          iVar9 = iVar9 + 1;
        }
        if (*(int *)(**(int **)(_UNK_017578c0 + 0x175770c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x014e96a8(**(undefined4 **)(_UNK_017578c4 + 0x1757728));
        iVar10 = *piVar14;
        if (*(int *)(**(int **)(_UNK_017578c8 + 0x175773c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_017578cc + 0x175775c));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar3 + 0x10);
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_017578d0 + 0x175777c));
        func_0x0152e3ec(uVar2,iVar1,**(undefined4 **)(_UNK_017578d4 + 0x175779c),0);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02b75870(iVar9,iVar10,uVar4,1,0x10d,0,0,0,0,0,0,0,uVar2,0,0);
        iVar9 = *piVar7;
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        return *(undefined4 *)(iVar9 + 8);
      }
    }
    piVar14 = *(int **)(_UNK_017578d8 + 0x17576a4);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar8 = (char *)(_UNK_017578dc + 0x17576c0);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_017578e0 + 0x17576d4));
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
    iVar1 = func_0x029540a4(0x8cc0,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02884efc(iVar1,iVar9,iVar10,0);
  }
  return uVar2;
}

