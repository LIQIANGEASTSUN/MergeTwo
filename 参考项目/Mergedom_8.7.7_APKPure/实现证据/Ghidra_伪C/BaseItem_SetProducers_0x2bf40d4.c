
void TailTarget_2bf40d4(long param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  int iVar16;
  undefined1 auVar17 [12];
  
  if ((bRam0000000006812b16 & 1) == 0) {
    func_0x02ad6de0(PTR_DAT_063fc618);
    func_0x02ad6de0(PTR_DAT_063fc620);
    func_0x02ad6de0(PTR_DAT_063fc628);
    func_0x02ad6de0(PTR_DAT_063fc630);
    func_0x02ad6de0(PTR_DAT_063fc638);
    func_0x02ad6de0(PTR_DAT_063fc598);
    func_0x02ad6de0(PTR_DAT_063fc640);
    func_0x02ad6de0(PTR_DAT_063fc5a8);
    func_0x02ad6de0(PTR_DAT_063fc648);
    func_0x02ad6de0(PTR_DAT_063fc650);
    func_0x02ad6de0(PTR_DAT_063fa4e8);
    func_0x02ad6de0(PTR_DAT_063fc658);
    func_0x02ad6de0(PTR_DAT_063fc660);
    func_0x02ad6de0(PTR_DAT_063fc668);
    bRam0000000006812b16 = 1;
  }
  *(undefined1 *)(param_1 + 200) = 1;
  func_0x02cf3a8c(param_1);
  lVar12 = *(long *)(param_1 + 0xb0);
  if (lVar12 != 0) {
LAB_02cf41d0:
    puVar2 = PTR_DAT_063fa4e8;
    if (*(char *)(lVar12 + 0x35) == '\0') {
      func_0x02cf3a8c(param_1);
      lVar12 = *(long *)(param_1 + 0xb8);
      if (lVar12 != 0) {
        iVar16 = *(int *)(lVar12 + 0x18);
        *(undefined4 *)(lVar12 + 0x18) = 0;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (0 < iVar16) {
          func_0x0522ffd4(*(undefined8 *)(lVar12 + 0x10),0,iVar16,0);
          return;
        }
      }
      return;
    }
    plVar15 = (long *)(param_1 + 0xb8);
    lVar12 = *plVar15;
    if (lVar12 == 0) {
      lVar12 = func_0x02ad7078(*(undefined8 *)PTR_DAT_063fc668);
      func_0x03c285c8(lVar12,*(undefined8 *)PTR_DAT_063fc640);
      *plVar15 = lVar12;
      func_0x02ad6d8c(plVar15,lVar12);
      lVar12 = *plVar15;
      if (lVar12 != 0) {
LAB_02cf42b0:
        iVar16 = *(int *)(lVar12 + 0x18);
        *(undefined4 *)(lVar12 + 0x18) = 0;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (0 < iVar16) {
          func_0x0522ffd4(*(undefined8 *)(lVar12 + 0x10),0,iVar16,0);
        }
        puVar3 = PTR_DAT_063fc658;
        puVar2 = PTR_DAT_063fc638;
        if ((*(long *)(param_1 + 0xb0) != 0) &&
           (lVar12 = *(long *)(*(long *)(param_1 + 0xb0) + 0x38), lVar12 != 0)) {
          if (*(int *)(lVar12 + 0x18) == 0) {
            return;
          }
          if (0 < *(int *)(lVar12 + 0x18)) {
            iVar16 = 0;
            do {
              lVar4 = TailTarget_3b28b60(lVar12,iVar16,*(undefined8 *)puVar3);
              if (lVar4 == 0) goto LAB_02cf4220;
              if (*(int *)(lVar4 + 0x30) == 0) {
                lVar5 = *(long *)(param_1 + 0x20);
                puVar8 = (undefined8 *)PTR_DAT_063fc630;
                if (*(char *)(lVar4 + 0x46) != '\0') {
                  puVar8 = (undefined8 *)PTR_DAT_063fc628;
                }
              }
              else if (*(int *)(lVar4 + 0x30) == 2) {
                lVar5 = *(long *)(param_1 + 0x20);
                puVar8 = (undefined8 *)PTR_DAT_063fc618;
              }
              else {
                lVar5 = *(long *)(param_1 + 0x20);
                puVar8 = (undefined8 *)PTR_DAT_063fc620;
              }
              if (lVar5 == 0) goto LAB_02cf4220;
              plVar15 = (long *)func_0x034daf98(lVar5,*puVar8);
              if ((param_3 == 0) || (*(int *)(param_3 + 0x18) == 0)) {
                uVar6 = 0;
              }
              else {
                uVar6 = TailTarget_3b28b60(param_3,iVar16,*(undefined8 *)PTR_DAT_063fc660);
              }
              lVar5 = 0x80;
              if (iVar16 != 0) {
                lVar5 = 0x88;
              }
              if (iVar16 == 0) {
                uVar11 = *(undefined8 *)(param_1 + 0x90);
              }
              else {
                uVar11 = 0;
              }
              if (plVar15 == (long *)0x0) goto LAB_02cf4220;
              (**(code **)(*plVar15 + 0x1d8))
                        (plVar15,param_1,lVar4,*(undefined8 *)(param_1 + lVar5),uVar11,param_2 & 1,
                         uVar6,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(*plVar15 + 0x1e0));
              lVar4 = *(long *)(param_1 + 0xb8);
              if (lVar4 == 0) goto LAB_02cf4220;
              lVar5 = *(long *)(lVar4 + 0x10);
              lVar14 = *(long *)puVar2;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar5 == 0) goto LAB_02cf4220;
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                plVar13 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                *plVar13 = (long)plVar15;
                func_0x02ad6d8c(plVar13,plVar15);
              }
              else {
                func_0x03c28e30(lVar4,plVar15,
                                *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
              iVar16 = iVar16 + 1;
            } while (iVar16 < *(int *)(lVar12 + 0x18));
          }
          *(undefined1 *)(param_1 + 200) = 0;
          return;
        }
      }
    }
    else {
      iVar16 = 0;
      do {
        if (*(int *)(lVar12 + 0x18) <= iVar16) goto LAB_02cf42b0;
        lVar12 = TailTarget_3b28b60(lVar12,iVar16,*(undefined8 *)puVar2);
        if (lVar12 == 0) break;
        func_0x02d0ce54(lVar12,0);
        lVar12 = *plVar15;
        iVar16 = iVar16 + 1;
      } while (lVar12 != 0);
    }
LAB_02cf4220:
                    /* WARNING: Subroutine does not return */
    NullReferenceThrowHelper();
  }
  func_0x02cf3d90(param_1);
  uVar6 = func_0x05c4a7ac(param_1,0);
  uVar11 = func_0x02ad6df4(PTR_DAT_063fc670);
  uVar7 = func_0x02ad6df4(PTR_DAT_063fc678);
  uVar6 = func_0x0507636c(uVar11,uVar6,uVar7,0);
  func_0x02ad6df4(PTR_DAT_063f4ed8);
  uVar11 = func_0x02ad7078();
  func_0x02c2ff18(uVar11,uVar6,0,0);
  uVar6 = func_0x02ad6df4(PTR_DAT_063fc680);
  auVar17 = func_0x02ad6f4c(uVar11,uVar6);
  uVar6 = auVar17._0_8_;
  if (auVar17._8_4_ == 1) {
    puVar8 = (undefined8 *)func_0x06026740(uVar6);
    uVar6 = func_0x02ad6df4(PTR_DAT_063f0de0);
    uVar9 = func_0x02ad7490(uVar6,*(undefined8 *)*puVar8);
    if ((uVar9 & 1) != 0) {
      uVar6 = *puVar8;
      func_0x06026750();
      func_0x03044da4(uVar6,0);
      lVar12 = *(long *)(param_1 + 0xb0);
      if (lVar12 == 0) {
        return;
      }
      goto LAB_02cf41d0;
    }
    puVar10 = (undefined8 *)func_0x060267c0(8);
    *puVar10 = *puVar8;
    uVar6 = func_0x060267d0(puVar10,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__0602cc08,0);
    func_0x06026750();
  }
  func_0x02bc46dc(uVar6);
  auVar17 = func_0x027a5a4c();
  lVar12 = *(long *)(auVar17._0_8_ + 0x68);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    NullReferenceThrowHelper();
  }
  uVar1 = auVar17._8_4_ & 1;
  if ((bRam0000000006825031 & 1) == 0) {
    func_0x02ad6de0(PTR_DAT_0646b6a8,uVar1,0);
    bRam0000000006825031 = 1;
  }
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    NullReferenceThrowHelper();
  }
  lVar4 = *(long *)(lVar12 + 0x10);
  if (lVar4 == 0) {
    func_0x05c5c7ec(lVar12,0);
  }
  if (pcRam0000000006825108 == (code *)0x0) {
    pcRam0000000006825108 = (code *)func_0x02ad6da4(&UNK_011bae12);
  }
                    /* WARNING: Could not recover jumptable at 0x05c443f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000006825108)(lVar4,uVar1);
  return;
}

