
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ba1f3c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar8 = (char *)(_UNK_02ba2500 + 0x2ba1f54);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02ba2504 + 0x2ba1f68));
    func_0x01438628(*(undefined4 *)(_UNK_02ba2508 + 0x2ba1f74));
    func_0x01438628(*(undefined4 *)(_UNK_02ba250c + 0x2ba1f80));
    func_0x01438628(*(undefined4 *)(_UNK_02ba2510 + 0x2ba1f8c));
    func_0x01438628(*(undefined4 *)(_UNK_02ba2514 + 0x2ba1f98));
    func_0x01438628(*(undefined4 *)(_UNK_02ba2518 + 0x2ba1fa4));
    func_0x01438628(*(undefined4 *)(_UNK_02ba251c + 0x2ba1fb0));
    func_0x01438628(*(undefined4 *)(_UNK_02ba2520 + 0x2ba1fbc));
    func_0x01438628(*(undefined4 *)(_UNK_02ba2524 + 0x2ba1fc8));
    func_0x01438628(*(undefined4 *)(_UNK_02ba2528 + 0x2ba1fd4));
    func_0x01438628(*(undefined4 *)(_UNK_02ba252c + 0x2ba1fe0));
    func_0x01438628(*(undefined4 *)(_UNK_02ba2530 + 0x2ba1fec));
    func_0x01438628(*(undefined4 *)(_UNK_02ba2534 + 0x2ba1ff8));
    func_0x01438628(*(undefined4 *)(_UNK_02ba2538 + 0x2ba2004));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0xfc6,0);
  if (iVar1 == 0) {
    piVar10 = *(int **)(_UNK_02ba253c + 0x2ba2068);
    iVar1 = **(int **)(*piVar10 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02b63a9c(iVar1,6,0,0);
    if (iVar1 == 0) {
      piVar14 = *(int **)(_UNK_02ba2540 + 0x2ba20a4);
      iVar1 = **(int **)(*piVar14 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x02d05e04(iVar1,0);
      iVar7 = **(int **)(*piVar14 + 0x5c);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = func_0x02d05fbc(iVar7,0,0);
      piVar12 = *(int **)(_UNK_02ba2544 + 0x2ba2100);
      if (*(int *)(*piVar12 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x024eec50(iVar7,0,0);
      if (iVar2 == 0) {
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        uVar3 = func_0x02cc9fb8(iVar7,0);
        if (*(int *)(*piVar12 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar7 = func_0x024ef144(iVar1,0,0);
        if (iVar7 != 0) {
          iVar7 = func_0x014388d4(**(undefined4 **)(_UNK_02ba2548 + 0x2ba217c));
          func_0x024eed9c(iVar7,**(undefined4 **)(_UNK_02ba254c + 0x2ba2190));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x024ef308(iVar1,0);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar4 = func_0x024eff78(iVar2,0);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar7 + 8);
          uVar11 = *(uint *)(iVar7 + 0xc);
          piVar10 = *(int **)(_UNK_02ba2550 + 0x2ba2200);
          *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
          iVar13 = *piVar10;
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          if (uVar11 < *(uint *)(iVar2 + 0xc)) {
            *(uint *)(iVar7 + 0xc) = uVar11 + 1;
            puVar5 = (undefined4 *)(iVar2 + uVar11 * 4 + 0x10);
            *puVar5 = uVar4;
            func_0x014385cc(puVar5,uVar4);
          }
          else {
            func_0x0152874c(iVar7,uVar4,
                            *(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38));
          }
          piVar12 = *(int **)(_UNK_02ba2554 + 0x2ba2260);
          piVar10 = *(int **)(_UNK_02ba2558 + 0x2ba2268);
          iVar2 = **(int **)(*piVar10 + 0x5c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          piVar6 = (int *)func_0x024ef308(iVar1,0);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          piVar9 = (int *)0x0;
          if ((piVar6 != (int *)0x0) &&
             (piVar9 = piVar6, *piVar6 != **(int **)(_UNK_02ba255c + 0x2ba22ac))) {
            piVar9 = (int *)0x0;
          }
          func_0x02b647b4(iVar2,4,piVar9,0,uVar3,1,iVar7,0);
        }
        iVar1 = **(int **)(*piVar14 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02d05edc(iVar1,0);
        if (iVar1 != 0) {
          if (*(int *)(**(int **)(_UNK_02ba2560 + 0x2ba231c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02ba2564 + 0x2ba2338));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar4 = func_0x02d0fe88(iVar1,0);
          if (*(int *)(*piVar12 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x024eec50(uVar4,0,0);
          if (iVar1 != 0) {
            iVar1 = **(int **)(*piVar10 + 0x5c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar15 = func_0x02b67d68(iVar1,6,0);
            iVar2 = (int)uVar15;
            iVar1 = 0;
            iVar7 = (int)((ulonglong)uVar15 >> 0x20);
            if (iVar2 != 0) {
              iVar1 = *(int *)(iVar2 + 0xc);
              iVar7 = iVar2;
            }
            if (iVar2 != 0 && iVar1 != 0) {
              func_0x0152da0c(&uStack_38,iVar7,**(undefined4 **)(_UNK_02ba2568 + 0x2ba23d4));
              puVar5 = *(undefined4 **)(_UNK_02ba256c + 0x2ba23e8);
              do {
                iVar7 = func_0x04878f14(&uStack_38,*puVar5);
                iVar1 = iStack_2c;
                if (iVar7 == 0) goto LAB_02ba2454;
                if (iStack_2c == 0) {
                  func_0x014388e4();
                }
                iVar1 = func_0x014e9678(iVar1,uVar3,0);
              } while (iVar1 == 0);
              iVar1 = **(int **)(*piVar10 + 0x5c);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              func_0x02b6127c(iVar1,6,uVar3,uVar3,0);
LAB_02ba2454:
              func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02ba2570 + 0x2ba2460));
            }
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0xfc6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

