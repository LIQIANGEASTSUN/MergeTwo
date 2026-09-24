
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c84194(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 extraout_r1;
  int *piVar8;
  char *pcVar9;
  uint uVar10;
  undefined4 uVar11;
  bool bVar12;
  int iVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined4 uStack_78;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  uint uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  uint uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar9 = (char *)(_UNK_01c8479c + 0x1c841ac);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c847a0 + 0x1c841c0));
    func_0x01438628(*(undefined4 *)(_UNK_01c847a4 + 0x1c841cc));
    func_0x01438628(*(undefined4 *)(_UNK_01c847a8 + 0x1c841d8));
    func_0x01438628(*(undefined4 *)(_UNK_01c847ac + 0x1c841e4));
    func_0x01438628(*(undefined4 *)(_UNK_01c847b0 + 0x1c841f0));
    func_0x01438628(*(undefined4 *)(_UNK_01c847b4 + 0x1c841fc));
    func_0x01438628(*(undefined4 *)(_UNK_01c847b8 + 0x1c84208));
    func_0x01438628(*(undefined4 *)(_UNK_01c847bc + 0x1c84214));
    func_0x01438628(*(undefined4 *)(_UNK_01c847c0 + 0x1c84220));
    func_0x01438628(*(undefined4 *)(_UNK_01c847c4 + 0x1c8422c));
    func_0x01438628(*(undefined4 *)(_UNK_01c847c8 + 0x1c84238));
    func_0x01438628(*(undefined4 *)(_UNK_01c847cc + 0x1c84244));
    func_0x01438628(*(undefined4 *)(_UNK_01c847d0 + 0x1c84250));
    func_0x01438628(*(undefined4 *)(_UNK_01c847d4 + 0x1c8425c));
    func_0x01438628(*(undefined4 *)(_UNK_01c847d8 + 0x1c84268));
    func_0x01438628(*(undefined4 *)(_UNK_01c847dc + 0x1c84274));
    func_0x01438628(*(undefined4 *)(_UNK_01c847e0 + 0x1c84280));
    *pcVar9 = '\x01';
  }
  uStack_4c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_48 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_50 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  uStack_3c = uStack_4c;
  iStack_38 = iStack_48;
  uStack_34 = uStack_44;
  iVar2 = func_0x02953fd4(0xadda,0);
  if (iVar2 == 0) {
    iVar3 = func_0x029f3fe4(param_1,0);
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = *(int *)(param_1 + 0x44);
    }
    if (iVar3 != 0 && iVar2 != 0) {
      iVar2 = FUN_01c733a0(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (*(char *)(iVar2 + 0x20) == '\0') {
        if (*(int *)(**(int **)(_UNK_01c847e4 + 0x1c84344) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01c847e8 + 0x1c84360));
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar15 = func_0x026ffbe0(iVar2,0);
        uVar7 = (uint)((ulonglong)uVar15 >> 0x20);
        iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_01c847ec + 0x1c84394));
        func_0x024eed9c(iVar2,**(undefined4 **)(_UNK_01c847f0 + 0x1c843a4));
        iVar3 = 0;
        while( true ) {
          iVar4 = FUN_01c733a0(param_1);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar4 = *(int *)(iVar4 + 0x10);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar4 + 0xc) <= iVar3) break;
          iVar4 = FUN_01c733a0(param_1);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar4 = *(int *)(iVar4 + 0x10);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar4 = func_0x03b780b0(iVar4,iVar3,**(undefined4 **)(_UNK_01c847f4 + 0x1c84420));
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          if (*(char *)(iVar4 + 0x10) == '\0') {
            iVar13 = *(int *)(iVar4 + 0x14);
            if (iVar13 == 0) {
              func_0x014388e4();
            }
            func_0x024f14cc(&uStack_78,iVar13,**(undefined4 **)(_UNK_01c847f8 + 0x1c8446c));
            uStack_50 = uStack_78;
            uStack_4c = uStack_74;
            iStack_48 = iStack_70;
            uStack_44 = uStack_6c;
            uStack_40 = uStack_68;
            uStack_3c = uStack_64;
            iStack_38 = iStack_60;
            uStack_34 = uStack_5c;
            uStack_30 = uStack_58;
            uStack_2c = uStack_54;
            bVar12 = false;
            do {
              do {
                do {
                  iVar5 = func_0x0151788c(&uStack_50,**(undefined4 **)(_UNK_01c847fc + 0x1c844a4));
                  iVar13 = iStack_38;
                  uVar1 = uStack_3c;
                  uVar10 = uStack_40;
                  if (iVar5 == 0) {
                    func_0x024f14dc(&uStack_50,**(undefined4 **)(_UNK_01c84800 + 0x1c84528));
                    if (bVar12) {
                      if (iVar2 == 0) {
                        func_0x014388e4();
                      }
                      iVar13 = *(int *)(iVar2 + 8);
                      uVar10 = *(uint *)(iVar2 + 0xc);
                      piVar8 = *(int **)(_UNK_01c84808 + 0x1c84578);
                      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
                      iVar5 = *piVar8;
                      if (iVar13 == 0) {
                        func_0x014388e4();
                      }
                      if (uVar10 < *(uint *)(iVar13 + 0xc)) {
                        *(uint *)(iVar2 + 0xc) = uVar10 + 1;
                        piVar8 = (int *)(iVar13 + uVar10 * 4 + 0x10);
                        *piVar8 = iVar4;
                        func_0x014385cc(piVar8,iVar4);
                      }
                      else {
                        func_0x0152874c(iVar2,iVar4,
                                        *(undefined4 *)
                                         (*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x38));
                      }
                      func_0x01c84820(param_1);
                    }
                    iVar4 = FUN_01c733a0(param_1);
                    if (iVar4 == 0) {
                      func_0x014388e4();
                    }
                    if (*(char *)(iVar4 + 0x20) != '\0') goto LAB_01c84654;
                    goto LAB_01c845f8;
                  }
                  bVar14 = uStack_40 <= (uint)uVar15;
                } while (uVar7 <= uStack_3c && (uint)bVar14 <= uVar7 - uStack_3c);
                if (iVar4 == 0) {
                  func_0x014388e4(uVar7 - (uStack_3c + !bVar14));
                }
              } while (iVar13 <= *(int *)(iVar4 + 0x1c));
              func_0x026b03d0(iVar4,*(int *)(iVar4 + 0x1c),0);
              func_0x026b048c(iVar4,iVar13,0);
              bVar12 = true;
              func_0x026b0548(iVar4,extraout_r1,uVar10,uVar1,0);
            } while( true );
          }
LAB_01c845f8:
          iVar3 = iVar3 + 1;
        }
LAB_01c84654:
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar2 + 0xc)) {
          func_0x01c84c48(param_1);
          if (*(int *)(**(int **)(_UNK_01c84810 + 0x1c84688) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01c84814 + 0x1c846a4));
          piVar8 = *(int **)(_UNK_01c84818 + 0x1c846b8);
          iVar4 = *piVar8;
          if (*(int *)(iVar4 + 0x74) == 0) {
            func_0x014387a4();
            iVar4 = *piVar8;
          }
          uVar11 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x2c8);
          piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01c8481c + 0x1c846dc),1);
          if (piVar8 == (int *)0x0) {
            func_0x014388e4();
          }
          iVar4 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar8 + 0x20));
          if (iVar4 == 0) {
            uVar6 = func_0x01438904();
            func_0x01438790(uVar6,0);
          }
          if (piVar8[3] == 0) {
            func_0x014388e8();
          }
          piVar8[4] = iVar2;
          func_0x014385cc();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x029901b4(iVar3,uVar11,piVar8,0);
        }
      }
    }
  }
  else {
    iVar2 = func_0x029540a4(0xadda,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar2,param_1,0);
  }
  return;
}

