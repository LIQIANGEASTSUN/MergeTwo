
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_018ffdf8(undefined4 param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_019005b4 + 0x18ffe14);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019005b8 + 0x18ffe28));
    func_0x01438628(*(undefined4 *)(_UNK_019005bc + 0x18ffe34));
    func_0x01438628(*(undefined4 *)(_UNK_019005c0 + 0x18ffe40));
    func_0x01438628(*(undefined4 *)(_UNK_019005c4 + 0x18ffe4c));
    func_0x01438628(*(undefined4 *)(_UNK_019005c8 + 0x18ffe58));
    func_0x01438628(*(undefined4 *)(_UNK_019005cc + 0x18ffe64));
    func_0x01438628(*(undefined4 *)(_UNK_019005d0 + 0x18ffe70));
    func_0x01438628(*(undefined4 *)(_UNK_019005d4 + 0x18ffe7c));
    func_0x01438628(*(undefined4 *)(_UNK_019005d8 + 0x18ffe88));
    func_0x01438628(*(undefined4 *)(_UNK_019005dc + 0x18ffe94));
    func_0x01438628(*(undefined4 *)(_UNK_019005e0 + 0x18ffea0));
    func_0x01438628(*(undefined4 *)(_UNK_019005e4 + 0x18ffeac));
    func_0x01438628(*(undefined4 *)(_UNK_019005e8 + 0x18ffeb8));
    func_0x01438628(*(undefined4 *)(_UNK_019005ec + 0x18ffec4));
    func_0x01438628(*(undefined4 *)(_UNK_019005f0 + 0x18ffed0));
    func_0x01438628(*(undefined4 *)(_UNK_019005f4 + 0x18ffedc));
    func_0x01438628(*(undefined4 *)(_UNK_019005f8 + 0x18ffee8));
    func_0x01438628(*(undefined4 *)(_UNK_019005fc + 0x18ffef4));
    func_0x01438628(*(undefined4 *)(_UNK_01900600 + 0x18fff00));
    func_0x01438628(*(undefined4 *)(_UNK_01900604 + 0x18fff0c));
    func_0x01438628(*(undefined4 *)(_UNK_01900608 + 0x18fff18));
    func_0x01438628(*(undefined4 *)(_UNK_0190060c + 0x18fff24));
    func_0x01438628(*(undefined4 *)(_UNK_01900610 + 0x18fff30));
    func_0x01438628(*(undefined4 *)(_UNK_01900614 + 0x18fff3c));
    func_0x01438628(*(undefined4 *)(_UNK_01900618 + 0x18fff48));
    func_0x01438628(*(undefined4 *)(_UNK_0190061c + 0x18fff54));
    *pcVar8 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x02953fd4(0x9689,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01900620 + 0x18fffb8));
    func_0x024eeca8(iVar1,0);
    iVar3 = FUN_018f9728(param_1);
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
    iVar3 = func_0x024f1110(iVar3,uVar2,**(undefined4 **)(_UNK_01900624 + 0x1900010));
    if (iVar3 == 0) {
      iVar3 = FUN_018f9728(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x44);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x024f1120(iVar3,uVar2,1,**(undefined4 **)(_UNK_01900628 + 0x1900060));
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0190062c + 0x1900074));
      func_0x024eed9c(iVar3,**(undefined4 **)(_UNK_01900630 + 0x1900088));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar14 = (int *)(iVar1 + 8);
      *piVar14 = iVar3;
      func_0x014385cc(piVar14,iVar3);
      iVar3 = FUN_018fa30c(param_1);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x024f064c(iVar3,uVar2,&iStack_28,**(undefined4 **)(_UNK_01900634 + 0x19000e4));
      iVar3 = iStack_28;
      if (iStack_28 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0x10) != 0) {
        iVar3 = 0;
        puVar12 = *(undefined4 **)(_UNK_01900638 + 0x1900118);
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
          uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0190063c + 0x19001b8));
          func_0x02ca3c70(uVar5,uVar2,uVar4,0,0);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar9 + 8);
          uVar11 = *(uint *)(iVar9 + 0xc);
          piVar7 = *(int **)(_UNK_01900640 + 0x1900208);
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
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01900644 + 0x1900268));
      func_0x024f1124(iVar3,**(undefined4 **)(_UNK_01900648 + 0x190027c));
      piVar7 = (int *)(iVar1 + 0xc);
      *piVar7 = iVar3;
      func_0x014385cc(piVar7,iVar3);
      iVar3 = *(int *)(iVar1 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar3 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_0190064c + 0x19002c0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = FUN_018f8b90();
        if (iVar3 != 0) {
          func_0x0191a6dc(iVar3,0);
        }
        if (*(int *)(**(int **)(_UNK_01900650 + 0x19002f0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01900654 + 0x1900310));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02bb3638(iVar3,0,0);
        iVar3 = 0;
        puVar12 = *(undefined4 **)(_UNK_01900658 + 0x1900348);
        piVar13 = *(int **)(_UNK_0190065c + 0x1900350);
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
          func_0x020257a4(iVar10,0x220,uVar2,uVar4,0,0,0);
          iVar3 = iVar3 + 1;
        }
        if (*(int *)(**(int **)(_UNK_01900660 + 0x19004ac) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e96a8(**(undefined4 **)(_UNK_01900664 + 0x19004c8));
        iVar9 = *piVar14;
        if (*(int *)(**(int **)(_UNK_01900668 + 0x19004dc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar10 = func_0x014e9518(**(undefined4 **)(_UNK_0190066c + 0x19004fc));
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar10 + 0x10);
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_01900670 + 0x190051c));
        func_0x0152e3ec(uVar2,iVar1,**(undefined4 **)(_UNK_01900674 + 0x190053c),0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02b75870(iVar3,iVar9,uVar4,1,0x69,0,0,0,0,0,0,0,uVar2,0,0);
        iVar1 = *piVar7;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        return *(undefined4 *)(iVar1 + 8);
      }
    }
    piVar14 = *(int **)(_UNK_01900678 + 0x1900444);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar8 = (char *)(_UNK_0190067c + 0x1900460);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_01900680 + 0x1900474));
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
    iVar1 = func_0x029540a4(0x9689,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02884efc(iVar1,param_1,param_2,0);
  }
  return uVar2;
}

