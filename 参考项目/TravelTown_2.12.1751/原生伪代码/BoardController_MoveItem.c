// BoardController_MoveItem RVA 0x6A9B490
// 06b9b490


/* WARNING: Possible PIC construction at 0x06b9b518: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b9b6d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b9b7c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b9b9a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b9ba18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b9b9ac) */
/* WARNING: Removing unreachable block (ram,0x06b9b9b0) */
/* WARNING: Removing unreachable block (ram,0x06b9b9e4) */
/* WARNING: Removing unreachable block (ram,0x06b9ba00) */
/* WARNING: Removing unreachable block (ram,0x06b9b7c4) */
/* WARNING: Removing unreachable block (ram,0x06b9b7c8) */
/* WARNING: Removing unreachable block (ram,0x06b9b800) */
/* WARNING: Removing unreachable block (ram,0x06b9b838) */
/* WARNING: Removing unreachable block (ram,0x06b9b888) */
/* WARNING: Removing unreachable block (ram,0x06b9b890) */
/* WARNING: Removing unreachable block (ram,0x06b9b8a8) */
/* WARNING: Removing unreachable block (ram,0x06b9b8b0) */
/* WARNING: Removing unreachable block (ram,0x06b9b8d8) */
/* WARNING: Removing unreachable block (ram,0x06b9b8bc) */
/* WARNING: Removing unreachable block (ram,0x06b9b8c8) */
/* WARNING: Removing unreachable block (ram,0x06b9b8e8) */
/* WARNING: Removing unreachable block (ram,0x06b9b904) */
/* WARNING: Removing unreachable block (ram,0x06b9b928) */
/* WARNING: Removing unreachable block (ram,0x06b9b930) */
/* WARNING: Removing unreachable block (ram,0x06b9b958) */
/* WARNING: Removing unreachable block (ram,0x06b9b93c) */
/* WARNING: Removing unreachable block (ram,0x06b9b948) */
/* WARNING: Removing unreachable block (ram,0x06b9b968) */
/* WARNING: Removing unreachable block (ram,0x06b9b7d0) */
/* WARNING: Removing unreachable block (ram,0x06b9b6d8) */
/* WARNING: Removing unreachable block (ram,0x06b9b6dc) */
/* WARNING: Removing unreachable block (ram,0x06b9b734) */
/* WARNING: Removing unreachable block (ram,0x06b9b75c) */
/* WARNING: Removing unreachable block (ram,0x06b9b788) */
/* WARNING: Removing unreachable block (ram,0x06b9b794) */
/* WARNING: Removing unreachable block (ram,0x06b9b7b0) */
/* WARNING: Removing unreachable block (ram,0x06b9b700) */
/* WARNING: Removing unreachable block (ram,0x06b9b51c) */
/* WARNING: Removing unreachable block (ram,0x06b9b520) */
/* WARNING: Removing unreachable block (ram,0x06b9b55c) */
/* WARNING: Removing unreachable block (ram,0x06b9b528) */
/* WARNING: Removing unreachable block (ram,0x06b9ba1c) */
/* WARNING: Removing unreachable block (ram,0x06b9ba5c) */
/* WARNING: Removing unreachable block (ram,0x06b9ba20) */
/* WARNING: Removing unreachable block (ram,0x06b9ba3c) */
/* WARNING: Removing unreachable block (ram,0x06b9b560) */
/* WARNING: Removing unreachable block (ram,0x06b9b580) */
/* WARNING: Removing unreachable block (ram,0x06b9b594) */
/* WARNING: Removing unreachable block (ram,0x06b9b5ac) */
/* WARNING: Removing unreachable block (ram,0x06b9b5b4) */
/* WARNING: Removing unreachable block (ram,0x06b9b5d0) */
/* WARNING: Removing unreachable block (ram,0x06b9b5d8) */
/* WARNING: Removing unreachable block (ram,0x06b9b600) */
/* WARNING: Removing unreachable block (ram,0x06b9b5e4) */
/* WARNING: Removing unreachable block (ram,0x06b9b5f0) */
/* WARNING: Removing unreachable block (ram,0x06b9b60c) */
/* WARNING: Removing unreachable block (ram,0x06b9b648) */
/* WARNING: Removing unreachable block (ram,0x06b9b684) */
/* WARNING: Removing unreachable block (ram,0x06b9b6b0) */
/* WARNING: Removing unreachable block (ram,0x06b9b61c) */
/* WARNING: Removing unreachable block (ram,0x06b9ba60) */
/* WARNING: Removing unreachable block (ram,0x06b9ba80) */
/* WARNING: Removing unreachable block (ram,0x06b9ba94) */
/* WARNING: Removing unreachable block (ram,0x06b9ba9c) */
/* WARNING: Removing unreachable block (ram,0x06b9baa8) */
/* WARNING: Removing unreachable block (ram,0x06b9bab4) */
/* WARNING: Removing unreachable block (ram,0x06b9bb44) */
/* WARNING: Removing unreachable block (ram,0x06b9babc) */
/* WARNING: Removing unreachable block (ram,0x06b9bb48) */
/* WARNING: Removing unreachable block (ram,0x06b9bb74) */
/* WARNING: Removing unreachable block (ram,0x06b9bb94) */
/* WARNING: Removing unreachable block (ram,0x06b9bbdc) */
/* WARNING: Removing unreachable block (ram,0x06b9bbac) */
/* WARNING: Removing unreachable block (ram,0x06b9bac8) */
/* WARNING: Removing unreachable block (ram,0x06b9bad8) */
/* WARNING: Removing unreachable block (ram,0x06b9bae0) */
/* WARNING: Removing unreachable block (ram,0x06b9bb08) */
/* WARNING: Removing unreachable block (ram,0x06b9baec) */
/* WARNING: Removing unreachable block (ram,0x06b9baf8) */
/* WARNING: Removing unreachable block (ram,0x06b9bb14) */
/* WARNING: Removing unreachable block (ram,0x06b9bb34) */
/* WARNING: Removing unreachable block (ram,0x06b9b59c) */

void target_BoardController_MoveItem(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_DAT_07832758;
  puVar1 = PTR_DAT_07779710;
  if ((bRam0000000007e2a839 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07832758);
    func_0x03280a18(PTR_DAT_07832760);
    func_0x03280a18(PTR_DAT_07779710);
    bRam0000000007e2a839 = 1;
  }
  uVar3 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x060157bc(uVar3,0);
  func_0x03280ca0(*(undefined8 *)puVar2);
  return;
}

