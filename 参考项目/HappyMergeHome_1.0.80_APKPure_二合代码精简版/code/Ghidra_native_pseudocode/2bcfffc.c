
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bdfffc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *piVar9;
  int unaff_r11;
  undefined8 uVar10;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_02be0734 + 0x2be001c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be0738 + 0x2be0030));
    func_0x01438628(*(undefined4 *)(_UNK_02be073c + 0x2be003c));
    func_0x01438628(*(undefined4 *)(_UNK_02be0740 + 0x2be0048));
    func_0x01438628(*(undefined4 *)(_UNK_02be0744 + 0x2be0054));
    func_0x01438628(*(undefined4 *)(_UNK_02be0748 + 0x2be0060));
    func_0x01438628(*(undefined4 *)(_UNK_02be074c + 0x2be006c));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  uStack_2c = 0;
  iVar2 = func_0x02953fd4(0x5c62,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x5c62,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x028cf098(iVar2,param_1,param_2,param_3,0);
    return;
  }
  iVar2 = FUN_02bad204(param_1,param_2,param_3);
  cVar1 = '\0';
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0x60);
    unaff_r11 = iVar2;
  }
  if (iVar2 == 0 || cVar1 == '\0') {
    return;
  }
  if (*(int *)(**(int **)(_UNK_02be0750 + 0x2be0100) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02be0754 + 0x2be011c));
  uVar7 = *(undefined4 *)(unaff_r11 + 8);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x029a6fa8(iVar2,uVar7,0);
  iVar3 = *(int *)(unaff_r11 + 0xc);
  if (iVar3 == 6) {
    iVar2 = func_0x02be2d0c(param_1,param_2,param_3);
    if (*(int *)(**(int **)(_UNK_02be0780 + 0x2be02b0) + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar8 = *(undefined4 **)(_UNK_02be0784 + 0x2be02cc);
    iVar3 = func_0x014e9518(*puVar8);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar10 = func_0x026ffbe0(iVar3,0);
    iVar3 = FUN_02bad204(param_1,param_2,param_3);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x014e6e04((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),1000,0);
    iVar3 = *(int *)(iVar3 + 0x98) - iVar2;
    if (iVar3 < iVar4) {
      if (*(int *)(**(int **)(_UNK_02be0788 + 0x2be0348) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(*puVar8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar10 = func_0x026ffbe0(iVar3,0);
      uVar10 = func_0x014e6e04((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),1000,0);
      iVar3 = (int)((ulonglong)uVar10 >> 0x20);
      uVar6 = 0x3c - iVar2;
      iVar2 = (uint)uVar10 - uVar6;
      iVar4 = iVar3 - (((int)uVar6 >> 0x1f) + (uint)((uint)uVar10 < uVar6));
    }
    else {
LAB_02be05cc:
      iVar2 = 0;
      iVar4 = 0;
    }
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 1) {
        iVar3 = FUN_02baed04(param_1,iVar2);
        if (iVar3 - 3U < 2) {
          iVar3 = FUN_02baed80(param_1,param_2,param_3);
          if (0 < iVar3) {
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0x70);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            if (*(uint *)(iVar2 + 0xc) < 2) {
              func_0x014388e8();
            }
            piVar9 = *(int **)(_UNK_02be0758 + 0x2be01d0);
            iVar2 = *(int *)(iVar2 + 0x14);
            if (*(int *)(*piVar9 + 0x74) == 0) {
              func_0x014387a4();
            }
            puVar8 = *(undefined4 **)(_UNK_02be075c + 0x2be01f8);
            iVar4 = func_0x014e9518(*puVar8);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            uVar10 = func_0x026ffbe0(iVar4,0);
            uVar10 = func_0x014e6e04((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),1000,0);
            iVar4 = (int)((ulonglong)uVar10 >> 0x20);
            uVar6 = iVar2 * 0x3c - iVar3;
            if ((int)uVar6 < (int)uVar10) {
              if (*(int *)(*piVar9 + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar2 = func_0x014e9518(*puVar8);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              uVar10 = func_0x026ffbe0(iVar2,0);
              uVar10 = func_0x014e6e04((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),1000,0);
              iVar4 = (int)((ulonglong)uVar10 >> 0x20);
              iVar2 = (uint)uVar10 - uVar6;
              iVar3 = iVar4 - (((int)uVar6 >> 0x1f) + (uint)((uint)uVar10 < uVar6));
            }
            else {
              iVar2 = 0;
              iVar3 = 0;
            }
            FUN_026f7520(unaff_r11,iVar4,iVar2,iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_02be0760 + 0x2be0480) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02be0764 + 0x2be049c));
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x02c4acc8(iVar3,iVar2,0);
          if (iVar3 == 0) {
            uStack_2c = 0;
            iVar3 = FUN_02bd880c(param_1,param_2,&uStack_2c,param_3);
            if (0 < iVar3) {
              iVar2 = FUN_02bd84dc(param_1,iVar2,unaff_r11);
              piVar9 = *(int **)(_UNK_02be0770 + 0x2be0638);
              if (*(int *)(*piVar9 + 0x74) == 0) {
                func_0x014387a4();
              }
              puVar8 = *(undefined4 **)(_UNK_02be0774 + 0x2be0654);
              iVar4 = func_0x014e9518(*puVar8);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              uVar10 = func_0x026ffbe0(iVar4,0);
              uVar10 = func_0x014e6e04((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),1000,0);
              iVar4 = (int)((ulonglong)uVar10 >> 0x20);
              uVar6 = iVar2 - iVar3;
              if ((int)uVar6 < (int)uVar10) {
                if (*(int *)(*piVar9 + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar2 = func_0x014e9518(*puVar8);
                if (iVar2 == 0) {
                  func_0x014388e4();
                }
                uVar10 = func_0x026ffbe0(iVar2,0);
                uVar10 = func_0x014e6e04((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),1000,0);
                iVar4 = (int)((ulonglong)uVar10 >> 0x20);
                iVar2 = (uint)uVar10 - uVar6;
                iVar3 = iVar4 - (((int)uVar6 >> 0x1f) + (uint)((uint)uVar10 < uVar6));
              }
              else {
                iVar2 = 0;
                iVar3 = 0;
              }
              FUN_026f72d8(unaff_r11,iVar4,iVar2,iVar3,0);
            }
          }
          else {
            uStack_28 = 0;
            iVar3 = FUN_02bd694c(param_1,param_2,&uStack_28,param_3);
            if (0 < iVar3) {
              iVar2 = FUN_02bd6714(param_1,iVar2);
              piVar9 = *(int **)(_UNK_02be0768 + 0x2be050c);
              if (*(int *)(*piVar9 + 0x74) == 0) {
                func_0x014387a4();
              }
              puVar8 = *(undefined4 **)(_UNK_02be076c + 0x2be0528);
              iVar4 = func_0x014e9518(*puVar8);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              uVar10 = func_0x026ffbe0(iVar4,0);
              uVar10 = func_0x014e6e04((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),1000,0);
              iVar4 = (int)((ulonglong)uVar10 >> 0x20);
              uVar6 = iVar2 - iVar3;
              if ((int)uVar6 < (int)uVar10) {
                if (*(int *)(*piVar9 + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar2 = func_0x014e9518(*puVar8);
                if (iVar2 == 0) {
                  func_0x014388e4();
                }
                uVar10 = func_0x026ffbe0(iVar2,0);
                uVar10 = func_0x014e6e04((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),1000,0);
                iVar4 = (int)((ulonglong)uVar10 >> 0x20);
                iVar2 = (uint)uVar10 - uVar6;
                iVar3 = iVar4 - (((int)uVar6 >> 0x1f) + (uint)((uint)uVar10 < uVar6));
              }
              else {
                iVar2 = 0;
                iVar3 = 0;
              }
              FUN_026f6e40(unaff_r11,iVar4,iVar2,iVar3,0);
            }
          }
        }
      }
      goto LAB_02be05dc;
    }
    iVar2 = FUN_02bada20(param_1,param_2,param_3);
    piVar9 = *(int **)(_UNK_02be0778 + 0x2be03c0);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar8 = *(undefined4 **)(_UNK_02be077c + 0x2be03dc);
    iVar3 = func_0x014e9518(*puVar8);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar10 = func_0x026ffbe0(iVar3,0);
    uVar10 = func_0x014e6e04((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),1000,0);
    iVar3 = (int)((ulonglong)uVar10 >> 0x20);
    uVar6 = 0x3c - iVar2;
    if ((int)uVar10 <= (int)uVar6) goto LAB_02be05cc;
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(*puVar8);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar10 = func_0x026ffbe0(iVar2,0);
    uVar10 = func_0x014e6e04((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),1000,0);
    iVar3 = (int)((ulonglong)uVar10 >> 0x20);
    iVar2 = (uint)uVar10 - uVar6;
    iVar4 = iVar3 - (((int)uVar6 >> 0x1f) + (uint)((uint)uVar10 < uVar6));
  }
  FUN_026f7088(unaff_r11,iVar3,iVar2,iVar4,0);
LAB_02be05dc:
  FUN_026f75f0(unaff_r11,0,0);
  return;
}

